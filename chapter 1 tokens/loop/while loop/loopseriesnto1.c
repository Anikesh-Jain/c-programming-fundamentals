#include<stdio.h>
int main()
{
    int i,n;
    printf("enter any number =");
    scanf("%d" , &n);
    i=n;
    while(i>=1)
    {   
         printf("%d \n" , i);
         i=i-1;
    }
return 0;
}