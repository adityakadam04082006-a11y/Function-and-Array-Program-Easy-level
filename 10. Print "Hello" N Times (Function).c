#include <stdio.h>

void printHello(int count) {
    for (int i = 0; i < count; i++) {
        printf("Hello!\n");
    }
}

int main() {
    printHello(3); // Will print "Hello!" 3 times
    return 0;
}