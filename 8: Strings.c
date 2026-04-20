// This is the eighth lesson that i prepared for you :) In this lesson, i am going to teach you how to use strings in C programming language.
// Strings are sequences of characters stored as arrays. In C, strings are essentially character arrays that end with a null character '\0'.
// Strings are very useful for handling text data in our programs. We can store names, messages, and other text information.
// A string can be declared as: char string_name[size]; or char string_name[] = "text";
// We can use string functions like strlen() to find length, strcpy() to copy strings, strcmp() to compare strings, and more.
// These functions are available in the string.h library. To use them, we need to include #include <string.h>
// Some common string functions are: strlen(), strcpy(), strcat(), strcmp(), strchr(), strstr(), and many more.
// String manipulation is fundamental in many programs, from simple text processing to complex applications.
// So, to do these things, we first add the stdio.h and string.h libraries to use printf and string functions.
// After that, we create our main function and demonstrate different string operations with practical examples.
// Then we end our program with error code 0 which means the program executed successfully.
// That's all for this lesson, see you later :)

#include <stdio.h>
#include <string.h>

int main()
{
    // Example 1: String Declaration and Initialization
    printf("=== String Declaration and Initialization ===\n");
    char name[] = "Alice";
    printf("String: %s\n", name);

    // Example 2: String with Explicit Size
    printf("\n=== String with Explicit Size ===\n");
    char city[20] = "Istanbul";
    printf("City: %s\n", city);

    // Example 3: String Length with strlen()
    printf("\n=== String Length (strlen) ===\n");
    char message[] = "Hello World";
    printf("String: %s\n", message);
    printf("Length: %lu\n", strlen(message));

    printf("Length of 'name': %lu\n", strlen(name));
    printf("Length of 'city': %lu\n", strlen(city));

    // Example 4: Copying Strings with strcpy()
    printf("\n=== Copying Strings (strcpy) ===\n");
    char original[] = "C Programming";
    char copy[20];
    strcpy(copy, original);
    printf("Original: %s\n", original);
    printf("Copy: %s\n", copy);

    // Example 5: Concatenating Strings with strcat()
    printf("\n=== Concatenating Strings (strcat) ===\n");
    char firstName[] = "John";
    char lastName[] = "Doe";
    char fullName[30];
    strcpy(fullName, firstName);
    strcat(fullName, " ");
    strcat(fullName, lastName);
    printf("Full Name: %s\n", fullName);

    // Example 6: Comparing Strings with strcmp()
    printf("\n=== Comparing Strings (strcmp) ===\n");
    char str1[] = "apple";
    char str2[] = "apple";
    char str3[] = "banana";

    printf("strcmp('apple', 'apple'): %d\n", strcmp(str1, str2));
    printf("strcmp('apple', 'banana'): %d\n", strcmp(str1, str3));
    printf("strcmp('banana', 'apple'): %d\n", strcmp(str3, str1));

    // Example 7: Finding Character in String with strchr()
    printf("\n=== Finding Character in String (strchr) ===\n");
    char text[] = "Hello World";
    char *position = strchr(text, 'o');
    if (position != NULL)
        printf("Character 'o' found at position: %ld\n", position - text);
    else
        printf("Character not found\n");

    // Example 8: Finding Substring with strstr()
    printf("\n=== Finding Substring (strstr) ===\n");
    char sentence[] = "The quick brown fox jumps";
    char *substring = strstr(sentence, "brown");
    if (substring != NULL)
        printf("Substring found: %s\n", substring);
    else
        printf("Substring not found\n");

    // Example 9: Converting String to Number
    printf("\n=== Converting String to Number ===\n");
    char numStr[] = "12345";
    int number = atoi(numStr);
    printf("String: %s\n", numStr);
    printf("Number: %d\n", number);
    printf("Number + 5 = %d\n", number + 5);

    // Example 10: Iterating Through String Characters
    printf("\n=== Iterating Through String Characters ===\n");
    char word[] = "HELLO";
    printf("Characters in '%s':\n", word);
    for (int i = 0; i < strlen(word); i++)
    {
        printf("%c ", word[i]);
    }
    printf("\n");

    // Example 11: String Comparison Examples
    printf("\n=== Password Verification Example ===\n");
    char password[] = "secret123";
    char userInput[] = "secret123";

    if (strcmp(password, userInput) == 0)
        printf("Password is correct!\n");
    else
        printf("Password is incorrect!\n");

    // Example 12: String Reversal
    printf("\n=== String Reversal ===\n");
    char original2[] = "Programming";
    int len = strlen(original2);
    printf("Original: %s\n", original2);
    printf("Reversed: ");
    for (int i = len - 1; i >= 0; i--)
        printf("%c", original2[i]);
    printf("\n");

    return 0;
}
