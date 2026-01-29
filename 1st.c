// Write a program in c to check whether a number is even or odd. 
#include<stdio.h>

int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    if(n%2==0)
    {
        printf("This is a even number.");
    }
    else{printf("This is a odd number.");}
    return 0;
}