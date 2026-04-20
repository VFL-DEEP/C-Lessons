// This is the fifth lesson that i prepared for you :) In this lesson, i am going to teach you how to use loops in C programming language.
// Loops are used to execute a block of code multiple times. This is very important in programming because it saves us from writing the same code repeatedly.
// There are three types of loops in C: for, while, and do-while.
// The for loop is used when we know exactly how many times we want to repeat a block of code.
// Syntax: for(initialization; condition; increment/decrement) { code to execute }
// The while loop executes a block of code as long as a condition is true.
// Syntax: while(condition) { code to execute }
// The do-while loop is similar to the while loop, but it executes the code block at least once before checking the condition.
// Syntax: do { code to execute } while(condition);
// Loops are very useful for iterating through arrays, printing values multiple times, and much more.
// So, to do these things, we first add the stdio.h library so we can use printf function.
// After that, we create our main function and demonstrate different types of loops with examples.
// Then we end our program with error code 0 which means the program executed successfully.
// That's all for this lesson, see you later :)

#include <stdio.h>

int main()
{
    // Example 1: For Loop
    printf("=== For Loop ===\n");
    printf("Printing numbers from 1 to 5:\n");
    for (int i = 1; i <= 5; i++)
    {
        printf("Number: %d\n", i);
    }

    // Example 2: For Loop with Decrement
    printf("\n=== For Loop with Decrement ===\n");
    printf("Printing numbers from 5 to 1:\n");
    for (int i = 5; i >= 1; i--)
    {
        printf("Number: %d\n", i);
    }

    // Example 3: While Loop
    printf("\n=== While Loop ===\n");
    int counter = 1;
    printf("Printing with while loop (1 to 5):\n");
    while (counter <= 5)
    {
        printf("Counter: %d\n", counter);
        counter++;
    }

    // Example 4: Do-While Loop
    printf("\n=== Do-While Loop ===\n");
    int num = 1;
    printf("Printing with do-while loop (1 to 5):\n");
    do
    {
        printf("Number: %d\n", num);
        num++;
    } while (num <= 5);

    // Example 5: Nested Loops (Multiplication Table)
    printf("\n=== Nested Loops (Multiplication Table 3x3) ===\n");
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            printf("%d * %d = %d\n", i, j, i * j);
        }
    }

    // Example 6: Break Statement
    printf("\n=== Break Statement ===\n");
    printf("Loop with break (stops at 3):\n");
    for (int i = 1; i <= 10; i++)
    {
        if (i == 4)
            break;
        printf("Value: %d\n", i);
    }

    // Example 7: Continue Statement
    printf("\n=== Continue Statement ===\n");
    printf("Loop with continue (skips even numbers):\n");
    for (int i = 1; i <= 5; i++)
    {
        if (i % 2 == 0)
            continue;
        printf("Value: %d\n", i);
    }

    return 0;
}
