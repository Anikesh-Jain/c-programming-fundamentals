#include<stdio.h>
#include<ctype.h>
int main()
{
    char x;
    printf("enter any character = ");
    scanf("%c" , &x);
    if(isupper(x))
        printf("character is in upper case");
    else
        printf("character is not in upper case");
    return 0;
}