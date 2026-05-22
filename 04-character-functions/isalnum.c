#include<stdio.h>
#include<ctype.h>
int main()
{
    char x;
    printf("enter any character = ");
    scanf("%c" , &x);
    if(isalnum(x))
        printf("character is alphabet or digit");
    else
        printf("character is not alphabet or digit ");
    return 0;
}
