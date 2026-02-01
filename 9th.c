// Write a program in c to print multiplication table. 

#include<stdio.h>
int main()
{
    int n, i, mul;
    printf("Enter number :");
    scanf("%d", &n);

     printf("%d multiplication table :\n", n);

    for(i = 1; i <= 10; i++)
    {
        mul = i*n;
        printf("%d * %d = %d\n", n, i, mul);
    }
    
    return 0;
}