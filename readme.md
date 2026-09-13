# Simple C Calculator

My first C project! A command-line calculator that takes two numbers and an
operator, then prints the result.

## Features
- Supports +, -, *, /
- Handles both whole numbers and decimals
- Detects division by zero
- Detects invalid operators

## How to compile and run

```bash
gcc calc.c -o calc
./calc
```

## Example
Calculator
Enter first number: 10
Enter operator (+, -, *, /): /
Enter second number: 4
10 / 4 = 2.50


## What I learned
- Basic input/output with `scanf` and `printf`
- Using `switch` statements
- Handling edge cases like division by zero