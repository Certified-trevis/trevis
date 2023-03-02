#include <stdio.h>

// function to check whether a number is even or odd
int isEven(int num) {
    if (num % 2 == 0) {
        return 1; // the number is even
    } else {
        return 0; // the number is odd
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isEven(num)) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }
    return 0;
}
