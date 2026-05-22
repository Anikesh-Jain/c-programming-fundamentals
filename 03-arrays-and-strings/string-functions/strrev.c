#include<stdio.h>
#include<string.h>
int main()
{
    char a[50];
    printf("enter your string = ");
    gets(a);
    printf("reversed string is = %s" , strrev(a));
    return 0;
}