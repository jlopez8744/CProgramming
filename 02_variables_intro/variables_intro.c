/*
    The introduction to variables.
*/

// Preprocessor directive
// stdio - standard input ouput
#include <stdio.h>

// Create a main function
int main() {
    // Create a variable
    int first_number;
    // Assign the value to a variable
    first_number = 100;

    // Create and initialize
    int second_number = -19;

    printf("Number 1: %d\n" , first_number);
    printf("Number 2: %d\n" , second_number);

    // Create a sum of two numbers
    int sum = first_number + second_number;

    printf("%d + %d = %d\n" , first_number, second_number, sum);

    return 0;
}