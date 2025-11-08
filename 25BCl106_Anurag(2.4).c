#include <stdio.h>

void swap(int x, int y) {
    int temp;
    temp = x;
    x = y;
    y = temp;

    printf("\nInside swap function:");
    printf("\nx = %d, y = %d\n", x, y);
}

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\nBefore calling swap:");
    printf("\na = %d, b = %d", a, b);

    swap(a, b);

    printf("\nAfter calling swap:");
    printf("\na = %d, b = %d\n", a, b);

    return 0;
}
