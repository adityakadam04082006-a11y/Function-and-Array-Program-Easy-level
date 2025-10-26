#include <stdio.h>

float cToF(float celsius) {
    return (celsius * 9.0 / 5.0) + 32;
}

int main() {
    float tempC = 30.0;
    printf("%.1f C is %.1f F\n", tempC, cToF(tempC));
    return 0;
}