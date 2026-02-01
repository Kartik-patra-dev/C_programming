// Write a program in c to generate Fibonacci series.
#include<stdio.h>
int main()
{
    int fib(int);
    int n,i;
    printf("Enter the number of terms :");
    scanf("%d", &n);
    printf("Fibonacci Serice :");
    for(i = 0; i < n; i++)
    {
        printf("%5d", fib(i));
    }
    return 0;
}

int fib(int x)
{
    
    if(x == 0 || x == 1)
    return x;
 int fibN = fib(x-1)+fib(x-2);
 return fibN;
}