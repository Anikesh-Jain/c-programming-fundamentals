#include<stdio.h>
int main()
{
    int i;
    char a[50],b[50];
    printf("enter your name = ");
    gets(a);
    i=0;
    while(a[i]!='\0')
    {
        b[i]=a[i];
        i++;
    }
    b[i]='\0';
    printf("\ncopied string =%s", b);
    return 0;
}