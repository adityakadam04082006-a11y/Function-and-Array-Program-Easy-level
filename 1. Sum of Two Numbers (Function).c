#include <stdio.h>

// Function definition
int add(int a, int b) {
    return a + b;
}

int main() {
    int num1 = 10, num2 = 5;
    int sum = add(num1, num2); // Function call
    printf("Sum is: %d\n", sum);
    return 0;
}