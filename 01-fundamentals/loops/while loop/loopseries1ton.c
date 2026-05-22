#include<stdio.h>
int main()
{
    int i,n;
    printf("enter any number =");
    scanf("%d" , &n);
    i=1;
    while(i<=n)
    {   
         printf("%d \n" , i);
         i=i+1;
    }
return 0;
}