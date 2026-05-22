#include<stdio.h>
#include<ctype.h>
int main()
{
    char x;
    printf("enter any character = ");
    scanf("%c" , &x);
    if(islower(x))
        printf("character is in lower case");
    else
        printf("character is not in lower case");
    return 0;
}
