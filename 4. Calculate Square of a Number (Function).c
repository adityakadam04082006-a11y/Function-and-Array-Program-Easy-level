#include <stdio.h>

int getSquare(int num) {
    return num * num;
}

int main() {
    int number = 7;
    printf("Square of %d is: %d\n", number, getSquare(number));
    return 0;
}