#include<stdio.h>
#include<ctype.h>
int main()
{
    char x;
    printf("enter any character in upper case = ");
    scanf("%c" , &x);
    printf("character in lower case = %c" , tolower(x));
    return 0;
}