#include <stdio.h>

float getAverage(int a, int b, int c) {
    float sum = a + b + c;
    return sum / 3.0; // Use 3.0 for float division
}

int main() {
    int n1 = 10, n2 = 11, n3 = 12;
    printf("Average is: %.2f\n", getAverage(n1, n2, n3));
    return 0;
}