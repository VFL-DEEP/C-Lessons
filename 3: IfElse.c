// This is the third lesson that i prepared for you :) In this lesson, i am going to teach you how to use if-else statements in C programming language.
// If-else statements are used to make decisions in our program based on conditions. We use the if statement to execute a block of code if a condition is true.
// If the condition is false, we can use the else statement to execute another block of code. We can also use else-if for multiple conditions.
// Conditions are created using comparison operators like == (equal), != (not equal), > (greater than), < (less than), >= (greater than or equal), <= (less than or equal).
// We can also combine multiple conditions using logical operators like && (AND), || (OR), and ! (NOT).
// So, to do this things, we first add the stdio.h library to our system so we can use printf and scanf functions.
// After that, we created our main function and used if-else statements to check conditions and execute different code blocks.
// Then we end our program with error code 0 so it means that our program is successfuly completed. Its all for this lesson, see you later :)

#include <stdio.h>

int main()
{
    int age;
    int number;

    // Example 1: Simple if-else
    printf("Example 1: Simple if-else\n");
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("You are an adult!\n");
    }
    else
    {
        printf("You are a minor!\n");
    }

    // Example 2: if-else-if for multiple conditions
    printf("\nExample 2: if-else-if\n");
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 0)
    {
        printf("The number is positive!\n");
    }
    else if (number < 0)
    {
        printf("The number is negative!\n");
    }
    else
    {
        printf("The number is zero!\n");
    }

    // Example 3: Using logical operators
    printf("\n=== Example 3: Logical Operators (AND) ===\n");
    int score = 85;
    int attendance = 90;

    if (score >= 70 && attendance >= 80)
    {
        printf("Excellent performance! You passed the course.\n");
    }
    else
    {
        printf("You need to improve!\n");
    }

    // Example 4: Using logical operators OR
    printf("\n=== Example 4: Logical Operators (OR) ===\n");
    char status;

    printf("Enter status: ");
    scanf(" %c", &status);

    if (status == 'Y' || status == 'y')
    {
        printf("Status is confirmed!\n");
    }
    else if (status == 'N' || status == 'n')
    {
        printf("Status is denied!\n");
    }
    else
    {
        printf("Invalid input!\n");
    }

    return 0;
}
