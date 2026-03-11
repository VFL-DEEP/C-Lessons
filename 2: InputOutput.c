// This is the second lesson that i prepared for you :) In this lesson, iam going to teach you how to use input and output in C programming language.
// Input/Output is essential for communicating with the user. Output is when we send data to the user using printf function. Input is when we receive data from the user using scanf function.
// With printf, we can print text and variables on the screen using format specifiers like %d for int, %c for char and %f for float.
// With scanf, we can read data from the keyboard and store it in variables. It is important to use the & operator to pass the address of the variable.
// So, to do this things, we first add the stdio.h library to our system so we can use both printf and scanf functions.
// After that, we created our main function and declared our variables. We use printf to display messages and scanf to get user input.
// Then we end our program with error code 0 so it means that our program is successfuly completed. Its all for this lesson, see you later :)

#include <stdio.h>

int main()
{
    int integer;
    char character;
    float decimal;

    printf("Enter your integer: ");
    scanf("%d", &integer);

    printf("Enter your character: ");
    scanf("%c", &character);

    printf("Enter your decimal: ");
    scanf("%f", &decimal);

    printf("\nYour integer: %d\n", integer);
    printf("Your character: %c\n", character);
    printf("Your decimal: %f\n", decimal);

    return 0;
}
