#include <stdio.h>

int findMinInArray(int arr[], int size) {
    int min = arr[0]; // Assume first element is min
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i]; // Update min if a smaller number is found
        }
    }
    return min;
}

int main() {
    int myArr[] = {45, 23, 67, 12, 89, 5};
    int n = 6;
    printf("The smallest number in the array is: %d\n", findMinInArray(myArr, n));
    return 0;
}