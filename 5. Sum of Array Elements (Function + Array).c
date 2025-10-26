#include <stdio.h>

int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum = sum + arr[i];
    }
    return sum;
}

int main() {
    int myArr[] = {1, 2, 3, 4, 5};
    int n = 5;
    printf("Sum of array elements is: %d\n", sumArray(myArr, n));
    return 0;
}