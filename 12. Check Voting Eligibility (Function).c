#include <stdio.h>

int isEligibleToVote(int age) {
    if (age >= 18) {
        return 1; // 1 means true
    } else {
        return 0; // 0 means false
    }
}

int main() {
    int myAge = 20;
    if (isEligibleToVote(myAge)) {
        printf("You are eligible to vote.\n");
    } else {
        printf("You are not eligible to vote.\n");
    }
    return 0;
}