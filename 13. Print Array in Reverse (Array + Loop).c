#include <stdio.h>

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int n = 5;

    printf("Array in reverse order:\n");
    // Start loop from the last element (n-1) and go down to 0
    for (int i = n - 1; i >= 0; i--) {
        printf("%d\n", numbers[i]);
    }
    return 0;
}