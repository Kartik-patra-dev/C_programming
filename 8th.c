// Write a program to convert a Binary number into its equivalent Decimal number.

#include <stdio.h>
#include <math.h>

int main() {
    long long b;
    int d = 0, i = 0, r; // b = binary, d = decimal, r = remainder

    printf("Enter a binary number: ");
    scanf("%lld", &b);

    while (b != 0) {
        r = b % 10;          // get the last digit (0 or 1)
        d += r * pow(2, i); // add to decimal value
        b /= 10;                     // remove last digit
        i++;                              // increase power of 2
    }

    printf("Decimal number = %d\n", d);

    return 0;
}
