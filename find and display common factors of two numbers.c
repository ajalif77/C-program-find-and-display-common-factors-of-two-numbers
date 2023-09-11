#include <stdio.h>

int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void commonFactors(int num1, int num2) {
    int gcd = findGCD(num1, num2);

    printf("Common factors of %d and %d are:", num1, num2);

    for (int i = 1; i <= gcd; i++) {
        if (gcd % i == 0) {
            printf(" %d", i);
        }
    }

    printf("\n");
}

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    commonFactors(num1, num2);

    return 0;
}
