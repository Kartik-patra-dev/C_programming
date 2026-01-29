// Write a program in c to find largest of three numbers.
#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the 3 number :");
    scanf("%d %d %d", &a, &b, &c);
    if(a>b && b>c)
    {
        printf("1st number is a largest number");
    }
    else if(a<b && b>c)
    {
        printf("2nd number is a largest number");
    }
    else 
    {
        printf("3rd number is a largest number");
    }
    return 0;
}