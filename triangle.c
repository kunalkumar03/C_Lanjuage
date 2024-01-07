#include <stdio.h>

int main() {
    int side1, side2, side3;
    printf("Enter the lengths of three sides of a triangle: ");
    scanf("%d %d %d", &side1, &side2, &side3);
    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
        printf("The given sides can form a triangle.\n");
    } else {
        printf("The given sides cannot form a triangle.\n");
    }

    return 0;
}