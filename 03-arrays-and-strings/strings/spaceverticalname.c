#include<stdio.h>
int main()
{
    int i;
    char name[50];
    printf("enter your name = ");
    gets(name);
    i=0;
    while(name[i]!='\0')
    {
        printf("\n%c" , name[i]);
        i++;
    }
    return 0;
}