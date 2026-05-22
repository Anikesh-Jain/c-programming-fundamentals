#include<stdio.h>
#include<string.h>
int main()
{
    char a[50];
    printf("enter your string in upper case = ");
    gets(a);
    printf("string in lower case = %s" , strlwr(a));
    return 0;
}