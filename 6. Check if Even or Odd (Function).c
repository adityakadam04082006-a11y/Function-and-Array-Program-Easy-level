#include <stdio.h>

// This function returns void because it just prints, it doesn't return a value
void checkEvenOdd(int num) {
    if (num % 2 == 0) {
        printf("%d is Even\n", num);
    } else {
        printf("%d is Odd\n", num);
    }
}

int main() {
    checkEvenOdd(10);
    checkEvenOdd(7);
    return 0;
}