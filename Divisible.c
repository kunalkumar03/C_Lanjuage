#include <stdio.h>

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number % 5 == 0 && number % 3 == 0) {
        printf("%d is divisible by both 5 and 3.\n", number);
    } else {
        printf("%d is not divisible by both 5 and 3.\n", number);
    }

    return 0;
}
