#include <stdio.h>

int findMaxInArray(int arr[], int size) {
    int max = arr[0]; // Assume first element is max
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i]; // Update max if a larger number is found
        }
    }
    return max;
}

int main() {
    int myArr[] = {45, 23, 67, 12, 89, 5};
    int n = 6;
    printf("The largest number in the array is: %d\n", findMaxInArray(myArr, n));
    return 0;
}