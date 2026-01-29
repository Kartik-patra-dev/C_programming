// Write a program in c to find sum of first n natural numbers
#include<stdio.h>

int main()
{
    int n, sum;
    printf("Enter the number :");
    scanf("%d", &n);
     sum = n * (n + 1) / 2;
    printf("sum of %d natural number = %d",n,sum);
    return 0;
}

