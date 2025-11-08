#include <stdio.h>

void print1ToN(int i, int n) {
    if(i > n) return;
    printf("%d ", i);
    print1ToN(i + 1, n);
}

void printNTo1(int n) {
    if(n == 0) return;
    printf("%d ", n);
    printNTo1(n - 1);
}

int sum(int n) {
    if(n == 0) return 0;
    return n + sum(n - 1);
}

int fact(int n) {
    if(n == 0) return 1;
    return n * fact(n - 1);
}

void table(int n, int i) {
    if(i > 10) return;
    printf("%d x %d = %d\n", n, i, n*i);
    table(n, i + 1);
}

int fib(int n) {
    if(n <= 1) return n;
    return fib(n-1) + fib(n-2);
}

int gcd(int a, int b) {
    if(b == 0) return a;
    return gcd(b, a % b);
}

int countDigits(int n) {
    if(n == 0) return 0;
    return 1 + countDigits(n / 10);
}

int main() {
    int n, a, b, choice;

    do {
        printf("\n\n===== MENU (Recursion Programs) =====\n");
        printf("1. Print 1 to N\n");
        printf("2. Print N to 1\n");
        printf("3. Sum of first N natural numbers\n");
        printf("4. Factorial\n");
        printf("5. Multiplication Table\n");
        printf("6. Fibonacci Series\n");
        printf("7. GCD of two numbers\n");
        printf("8. Count digits\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter N: ");
                scanf("%d", &n);
                print1ToN(1, n);
                break;

            case 2:
                printf("Enter N: ");
                scanf("%d", &n);
                printNTo1(n);
                break;

            case 3:
                printf("Enter N: ");
                scanf("%d", &n);
                printf("Sum = %d", sum(n));
                break;

            case 4:
                printf("Enter number: ");
                scanf("%d", &n);
                printf("Factorial = %d", fact(n));
                break;

            case 5:
                printf("Enter number: ");
                scanf("%d", &n);
                table(n, 1);
                break;

            case 6:
                printf("Enter N: ");
                scanf("%d", &n);
                for(int i = 0; i < n; i++)
                    printf("%d ", fib(i));
                break;

            case 7:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                printf("GCD = %d", gcd(a, b));
                break;

            case 8:
                printf("Enter a number: ");
                scanf("%d", &n);
                printf("Digits = %d", countDigits(n));
                break;

            case 9:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice!");
        }

    } while(choice != 9);

    return 0;
}