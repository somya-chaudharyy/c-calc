#include <stdio.h>

int main() {
    printf("Calculator\n");
    double num1, num2;
    char operator;
    printf("Enter first number: ");
    scanf("%lf", &num1); 
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);
    printf("Enter second number: ");
    scanf("%lf", &num2);

    /* checking float or int 
       If user has entered integers, if statement will be true, else it will be false.
       Since our calculator has a precision of 2 decimal places, we will check for decimal upto 3 digit */
    if (((long long)(num1 * 1000)) % 1000 == 0 && ((long long)(num2 * 1000)) % 1000 == 0) {
        long long intNum1 = (long long)num1;
        long long intNum2 = (long long)num2;
        // Perform integer operations
        printf("%lld %c %lld = ", intNum1, operator, intNum2);
        switch (operator) {
        case '+':
            printf("%lld\n", intNum1 + intNum2);
            break;
        case '-':
            printf("%lld\n", intNum1 - intNum2);
            break;
        case '*':
            printf("%lld\n", intNum1 * intNum2);
            break;
        case '/':
            if (intNum2 != 0) {
                printf("%.2f\n", (float)intNum1 / intNum2);
            } else {
                //handle division by zero error
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
        //handle invalid operator error
            printf("Please enter a valid operator or operand.\n");
            break;
        }
    } else {

        printf("%.2f %c %.2f = ", num1, operator, num2);
        // Perform float operations
        switch (operator) {
        case '+':
            printf("%.2lf\n", num1 + num2);
            break;
        case '-':
            printf("%.2lf\n", num1 - num2);
            break;
        case '*':
            printf("%.2lf\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("%.2lf\n", num1 / num2);
            } else {
                //handle division by zero error
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
        //handle invalid operator error
            printf("Please enter a valid operator or operand.\n");
            break;
        }
    }

    return 0;
}