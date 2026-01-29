// Write a program in c to find factorial of a number.

// #include<stdio.h>

// int fact(int n);

// int main()
// {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     printf("Factorial of %d is: %d\n", n, fact(n));
//     return 0;
// }

// int fact(int n)
// {
//     if (n == 0 || n == 1)
//     {
//         return n; 
//     }
    
//     int factN = fact(n - 1)*n;
//     return factN;
// }

#include<stdio.h>

int main()
{
    int n, f1;
    int fact(int);
    printf("Enter a number :");
    scanf("%d", &n);
    f1 = fact(n);
    printf("Factorial of a number is : %d", f1);
    return 0;
}

int fact(int n1)
{
    int i, f = 1;
    for(i = 1; i<=n1; i++)
    {
        f = f*i;
    }
    return (f);
}