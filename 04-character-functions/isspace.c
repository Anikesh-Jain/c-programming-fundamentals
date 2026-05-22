#include<stdio.h>
#include<ctype.h>
int main()
{
    char x;
    printf("enter any character = ");
    scanf("%c" , &x);
    if(isspace(x))
        printf("character is space");
    else
        printf("character is not space");
    return 0;
}