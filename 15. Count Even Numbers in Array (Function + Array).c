#include <stdio.h>

int countEven(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int myArr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = 8;
    printf("There are %d even numbers in the array.\n", countEven(myArr, n));
    return 0;
}