#include <stdio.h>

int main() {
    int n = 5;
    int values[n]; // Array of size 5

    printf("Enter 5 integer values:\n");
    for (int i = 0; i < n; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &values[i]);
    }

    printf("\nYou entered: \n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", values[i]);
    }
    return 0;
}