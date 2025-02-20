#include <stdio.h>
#include <unistd.h> //usleep function
#include <stdlib.h> //rand function
#include <time.h> //time function

//XL7XJ

void printHello(int);
int farenheitToCelcius(int);
void printTemperatures(int, int);
void printNRandom(int);
void repeatPrint();

void main() {
    repeatPrint();
}

void printHello(int n) {
    for (int i = 0; i < n; i++) {
        printf("Hello, World! : %d\n", i+1);
        usleep(30000);
    }
}

int farenheitToCelcius(int f) {
    return (f - 32) * 5 / 9;
}

void printTemperatures(int min, int max) {
    if (min > max) {
        puts("Invalid minimum and maximum notation");
    }
    for (int f = min; f <= max; f++) {
        int c = farenheitToCelcius(f);
        printf("%d F -> %d C\n", f, c);
        usleep(30000);
    }
}

void printNRandom(int n) {
    for (int i = 0; i < n; i++) {
        printf("%d\n", rand() % 10);
        usleep(30000);
    }
}

void repeatPrint() {
    int c = 1;
    while (c <= 10) {
        puts("I love coding!");
        c++;
    }
}