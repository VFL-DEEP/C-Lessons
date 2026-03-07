// This is the first lesson that i prepared for you :) In thıs lesson, iam going to teach you how to use variables in C
// programming language. We use variables to stroe some data in our system. With int, we store big numbers up to around 2.1 bilion.
// With char, we store single character files in our system. With float, we store decimal numbers on our system. So, to do
// this things, we first add the stdio.h library to our system so we can use basics like printf and scanf functions.
// After that, we created our main function and  added our variables. In printf function, we print our variables with the 
// format specifiers. %c for char, %d for int and %f for float. Then we end our program with error code 0 so it means that our 
// program is successfuly completed. Its all for this lesson, see you later :)

#include <stdio.h>

int main() {
    int number = 100; 
    char character = 'B';
    float decimalNumber =  3.12 ;
    printf("character: %c\n", character);
    printf("Number: %d\n", number);
    printf("Decimal Number: %f\n", decimalNumber);
    return 0;
}