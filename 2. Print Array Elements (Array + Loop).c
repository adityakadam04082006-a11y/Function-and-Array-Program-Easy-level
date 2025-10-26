#include <stdio.h>

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int n = 5; // Size of the array
    
    printf("Array elements are: \n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", numbers[i]);
    }
    return 0;
}