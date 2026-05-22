#include<stdio.h>
#include<ctype.h>
int main()
{
    char x;
    printf("enter any character = ");
    scanf("%c" , &x);
    if(isdigit(x))
        printf("character is digit");
    else
        printf("character is not digit ");
    return 0;
}
