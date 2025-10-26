#include <stdio.h>

int findMax(int x, int y) {
    if (x > y) {
        return x;
    } else {
        return y;
    }
}

int main() {
    int a = 15;
    int b = 25;
    printf("The larger number is: %d\n", findMax(a, b));
    return 0;
}