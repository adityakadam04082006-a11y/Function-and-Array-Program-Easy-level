#include <stdio.h>

float simpleInterest(float p, float r, float t) {
    return (p * r * t) / 100.0;
}

int main() {
    float principal = 1000;
    float rate = 5; // 5%
    float time = 2; // 2 years
    
    float si = simpleInterest(principal, rate, time);
    printf("Simple Interest is: %.2f\n", si);
    return 0;
}