#include<stdio.h>
int main()
{
    int i,j;
    char a[50],b[50],c[100];
    printf("enter your name in a string = ");
    gets(a);
    i=0;
    while(a[i]!='\0')
    {
        c[i]=a[i];
        i++;
    }
    printf("enter your name in b string = ");
    gets(b);
    while(b[j]!='\0')
    {
        c[i]=b[j];
        j++;
        i++;
    }
    c[i]='\0';
    printf("\ncopies string =%s", c);
    return 0;
}