// This is the fourth lesson that i prepared for you :) In this lesson, i am going to teach you how to use operators in C programming language.
// Operators are used to perform operations on variables and values. They are very important in programming because they allow us to calculate
// numbers and compare values in our programs.
//
// There are different types of operators in C:
//
// Arithmetic operators are used for mathematical operations like addition, subtraction, multiplication and division.
// Examples: + (addition), - (subtraction), * (multiplication), / (division), % (modulus)
//
// Comparison operators are used to compare two values. They return either true (1) or false (0).
// Examples: == (equal), != (not equal), > (greater than), < (less than), >= (greater than or equal), <= (less than or equal)
//
// Logical operators are used to combine multiple conditions.
// Examples: && (AND), || (OR), ! (NOT)
//
// So, to do these things, we first add the stdio.h library so we can use printf function.
// After that, we create our main function and use different operators in example calculations.
// Then we end our program with error code 0 which means the program executed successfully.
// That's all for this lesson, see you later :)

#include <stdio.h>

int main()
{
    int a = 10;
    int b = 3;

    // Example 1: Arithmetic Operators
    printf("=== Arithmetic Operators ===\n");
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n", a % b);

    // Example 2: Comparison Operators
    printf("\n=== Comparison Operators ===\n");
    printf("a == b : %d\n", a == b);
    printf("a != b : %d\n", a != b);
    printf("a > b : %d\n", a > b);
    printf("a < b : %d\n", a < b);
    printf("a >= b : %d\n", a >= b);
    printf("a <= b : %d\n", a <= b);

    // Example 3: Logical Operators
    printf("\n=== Logical Operators ===\n");

    int x = 1;
    int y = 0;

    printf("x && y : %d\n", x && y);
    printf("x || y : %d\n", x || y);
    printf("!x : %d\n", !x);

    return 0;
}
