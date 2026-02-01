// Write a program to convert a Decimal number into its equivalent Binary number.

#include <stdio.h>

int main() {
    int n, binary[20], i = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &n);

    // Special case for 0
    if (n == 0) {
        printf("Binary = 0");
        return 0;
    }

    // Convert decimal to binary
    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    // Print binary in reverse order
    printf("Binary = ");
    for (i = i - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }

    return 0;
}
