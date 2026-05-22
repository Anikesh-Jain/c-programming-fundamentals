#include<stdio.h>
#include<ctype.h>
int main()
{
    char x;
    printf("enter any character = ");
    scanf("%c" , &x);
    if(isalpha(x))
        printf("character is alphabet");
    else
        printf("character is not alphabet ");
    return 0;
}
