#include <stdio.h>

int findNumber(int arr[], int size, int numToFind) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == numToFind) {
            return 1; // Found it!
        }
    }
    return 0; // Not found
}

int main() {
    int myArr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int key = 30;

    if (findNumber(myArr, n, key)) {
        printf("%d was found in the array.\n", key);
    } else {
        printf("%d was not found in the array.\n", key);
    }
    return 0;
}