// This is the sixth lesson that i prepared for you :) In this lesson, i am going to teach you how to use functions in C programming language.
// Functions are blocks of code that perform specific tasks. They help us organize our code, make it reusable, and easier to maintain.
// A function has a return type, a name, parameters (optional), and a body with code to execute.
// Syntax: return_type function_name(parameter_type parameter_name) { code to execute; return value; }
// Functions can return a value or return nothing (void). They can accept parameters or no parameters.
// By using functions, we can avoid code repetition and make our programs more organized and easier to understand.
// When we call a function with parameters, the values we pass are called arguments.
// The return statement is used to return a value from a function back to the calling code.
// So, to do these things, we first add the stdio.h library so we can use printf function.
// After that, we create our main function and define other functions that demonstrate various concepts.
// We then call these functions from main and display the results.
// Then we end our program with error code 0 which means the program executed successfully.
// That's all for this lesson, see you later :)

#include <stdio.h>

// Function with no parameters and no return value
void greetUser()
{
    printf("Hello! Welcome to C Functions!\n");
}

// Function with parameters and no return value
void printNumber(int num)
{
    printf("The number is: %d\n", num);
}

// Function with parameters and return value
int add(int a, int b)
{
    return a + b;
}

// Function that calculates the square of a number
int square(int num)
{
    return num * num;
}

// Function that checks if a number is even
int isEven(int num)
{
    if (num % 2 == 0)
        return 1; // true
    else
        return 0; // false
}

// Function that calculates factorial
int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;

    int result = 1;
    for (int i = 2; i <= n; i++)
    {
        result *= i;
    }
    return result;
}

// Function that calculates average of multiple numbers
float calculateAverage(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return (float)sum / size;
}

int main()
{
    // Example 1: Function with no parameters and no return
    printf("=== Example 1: No Parameters, No Return ===\n");
    greetUser();

    // Example 2: Function with parameters and no return
    printf("\n=== Example 2: With Parameters, No Return ===\n");
    printNumber(42);
    printNumber(100);

    // Example 3: Function with parameters and return value
    printf("\n=== Example 3: With Parameters and Return ===\n");
    int result = add(10, 20);
    printf("10 + 20 = %d\n", result);
    printf("5 + 8 = %d\n", add(5, 8));

    // Example 4: Square function
    printf("\n=== Example 4: Square Function ===\n");
    printf("Square of 5 = %d\n", square(5));
    printf("Square of 7 = %d\n", square(7));

    // Example 5: Even number checker
    printf("\n=== Example 5: Even Number Checker ===\n");
    printf("Is 10 even? %s\n", isEven(10) ? "Yes" : "No");
    printf("Is 15 even? %s\n", isEven(15) ? "Yes" : "No");

    // Example 6: Factorial function
    printf("\n=== Example 6: Factorial Function ===\n");
    printf("5! = %d\n", factorial(5));
    printf("6! = %d\n", factorial(6));

    // Example 7: Calculate average
    printf("\n=== Example 7: Calculate Average ===\n");
    int numbers[] = {10, 20, 30, 40, 50};
    int size = 5;
    float avg = calculateAverage(numbers, size);
    printf("Average of array: %.2f\n", avg);

    return 0;
}
