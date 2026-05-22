#include<stdio.h>
#include<string.h>
int main()
{
    char a[50];
    printf("enter your string in lower case = ");
    gets(a);
    printf("string in upper case = %s" , strupr(a));
    return 0;
}