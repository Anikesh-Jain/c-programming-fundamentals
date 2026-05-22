#include<stdio.h>
int main()
{
    char a[50];
    int i,word = 1;
   
    printf("enter your name = ");
    gets(a);
    i=0;
    while(a[i]!='\0')
    {
       if(a[i]==' ')
       {   
         word++;
       }
       i++;
    }
    printf("word in a string =%d" ,word );
    return 0;
}