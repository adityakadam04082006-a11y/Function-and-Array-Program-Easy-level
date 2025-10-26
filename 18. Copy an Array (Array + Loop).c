#include <stdio.h>

int main() {
    int n = 5;
    int sourceArr[] = {1, 2, 3, 4, 5};
    int destArr[n]; // Destination array

    // Copying elements
    for (int i = 0; i < n; i++) {
        destArr[i] = sourceArr[i];
    }

    printf("Copied array elements:\n");
    for (int i = 0; iKAi < n; i++) {
        printf("%d\n", destArr[i]);
    }
    return 0;
}