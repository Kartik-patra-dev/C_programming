// Write a program in c to check whether a number is palindrome number or not.

#include<stdio.h>
#include<string.h>

int main()
{
    char str1[30], str2[30];
    int i, j, k = 0;

    printf("Enter a String:");
    scanf("%s",str1);
    // gets(str1);

    for(i=0; str1[i]!='\0'; i++); //Finding length of string.
    printf("%d",i);

    for(j=i-1; j>=0; j--)
    {
        str2[k] = str1[j];
        k++;
    }
    str2[k] = '\0';
    printf("Reversed string: %s\n", str2);

    if(strcmp(str1, str2) == 0)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not palindrome\n");
    }
    return 0;
}