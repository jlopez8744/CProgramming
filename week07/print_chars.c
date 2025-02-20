#include <stdio.h>

int main(void) {
    char input;

    do {
        printf("Enter an uppercase character: ");
        scanf("%c", &input);
    } while (input < 'A' || input > 'Z');

    printf("\"%c\" is an uppercase character!\n\n", input);

    int number;
    do {
        printf("Enter a positive number: ");
        scanf("%d", &number);
    } while (number < 0);

    printf("\"%d\" is a positive number!\n\n", number);
    for (int i = 0; i < number; i++) {
        printf("%c", input);
    }
    printf("\n\n");

    char input2;

    do {
        printf("Enter * or #: ");
        scanf("%c", &input2);
    } while (input2 != 35 || input2 != 42);

    for (int i = 0; i < 5; i++) {
        printf("B%c", input2);
    }
    printf("\n");
}

