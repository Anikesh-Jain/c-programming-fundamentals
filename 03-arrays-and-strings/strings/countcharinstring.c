#include<stdio.h>
int main()
{
    int i,count = 0;
    char a[50];
    printf("enter your name = ");
    gets(a);
    i=0;
    while(a[i]!='\0')
    {
       count++;
       i++;
    }
    printf("charcter in a string =%d" ,count );
    return 0;
}