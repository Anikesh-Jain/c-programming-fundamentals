#include<stdio.h>
#include<ctype.h>
int main()
{
    char x;
    printf("enter any character in lower case = ");
    scanf("%c" , &x);
    printf("character in upper case = %c" , toupper(x));
    return 0;
}