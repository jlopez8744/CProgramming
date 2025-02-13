#include <stdio.h>
#include <unistd.h>

//XL7XJ

void printHello(int);

void main() {
    printHello(100);
}

int largest(int n1, int n2, int n3) {
    if (n1 >= n2 && n1 >= n3) {
        return n1;
    } else if (n2 >= n1 && n2 >= n3) {
        return n2;
    } else {
        return n3;
    }
}

void printHello(int n) {
    for (int i = 0; i < n; i++) {
        printf("Hello, World! : %d\n", i+1);
        usleep(30000);
    }
}