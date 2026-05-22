#include<stdio.h>
#include<string.h>
int main()
{
    char a[50];
    printf("enter your string = ");
    gets(a);
    printf("length of string is = %d" , strlen(a));
    return 0;
}