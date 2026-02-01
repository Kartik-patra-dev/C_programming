// Write a program in c to check whether a number is prime number or not.

#include <stdio.h>

int main() 
{
    int n, i ;
    int isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1)
    {
        isPrime = 1 ;
    }

    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            isPrime = 0;
            break;
        }
    }

    if (isPrime == 1)
        printf("%d is a Prime Number.\n", n);
    else
        printf("%d is NOT a Prime Number.\n", n);

    return 0;
}

