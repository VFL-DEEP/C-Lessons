// This is the seventh lesson that i prepared for you :) In this lesson, i am going to teach you how to use arrays in C programming language.
// Arrays are collections of elements of the same data type stored in contiguous memory locations.
// Arrays allow us to store multiple values in a single variable, which is very useful and efficient.
// A one-dimensional array is a simple list of elements.
// Syntax: data_type array_name[size]; or data_type array_name[] = {element1, element2, ...};
// A multi-dimensional array has multiple dimensions, like a table or matrix. The most common is a two-dimensional array.
// Syntax: data_type array_name[rows][columns];
// We access array elements using their index, which starts from 0.
// Arrays are very useful for storing lists of data, performing calculations on multiple values, and much more.
// So, to do these things, we first add the stdio.h library so we can use printf function.
// After that, we create our main function and demonstrate different types of arrays with practical examples.
// Then we end our program with error code 0 which means the program executed successfully.
// That's all for this lesson, see you later :)

#include <stdio.h>

int main()
{
    // Example 1: One-Dimensional Array - Declaration and Initialization
    printf("=== One-Dimensional Array ===\n");
    int numbers[5] = {10, 20, 30, 40, 50};

    printf("Array elements: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // Example 2: Accessing Array Elements
    printf("\n=== Accessing Array Elements ===\n");
    printf("First element: %d\n", numbers[0]);
    printf("Third element: %d\n", numbers[2]);
    printf("Last element: %d\n", numbers[4]);

    // Example 3: Modifying Array Elements
    printf("\n=== Modifying Array Elements ===\n");
    numbers[2] = 100;
    printf("After changing index 2 to 100: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // Example 4: Array Size and Loop Through
    printf("\n=== Array Size and Loop Through ===\n");
    int size = 5;
    printf("Sum of all elements: ");
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += numbers[i];
    }
    printf("%d\n", sum);

    // Example 5: Character Array (String)
    printf("\n=== Character Array ===\n");
    char letters[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    printf("Character array: %s\n", letters);

    // Example 6: Two-Dimensional Array
    printf("\n=== Two-Dimensional Array (Matrix) ===\n");
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    printf("Matrix elements:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Example 7: Accessing 2D Array Elements
    printf("\n=== Accessing 2D Array Elements ===\n");
    printf("Element at [0][0]: %d\n", matrix[0][0]);
    printf("Element at [1][1]: %d\n", matrix[1][1]);
    printf("Element at [2][2]: %d\n", matrix[2][2]);

    // Example 8: Modifying 2D Array Elements
    printf("\n=== Modifying 2D Array Elements ===\n");
    matrix[1][1] = 50;
    printf("After changing [1][1] to 50:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Example 9: Three-Dimensional Array
    printf("\n=== Three-Dimensional Array ===\n");
    int cube[2][2][2] = {
        {{1, 2}, {3, 4}},
        {{5, 6}, {7, 8}}};
    printf("3D Array element [1][1][1]: %d\n", cube[1][1][1]);

    // Example 10: Finding Maximum in Array
    printf("\n=== Finding Maximum in Array ===\n");
    int values[5] = {45, 23, 89, 12, 67};
    int max = values[0];
    for (int i = 1; i < 5; i++)
    {
        if (values[i] > max)
            max = values[i];
    }
    printf("Maximum value: %d\n", max);

    return 0;
}
