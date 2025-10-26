#include <stdio.h>

float calculateArea(float length, float width) {
    return length * width;
}

int main() {
    float len = 5.5;
    float wid = 2.0;
    printf("Area of rectangle is: %.2f\n", calculateArea(len, wid));
    return 0;
}