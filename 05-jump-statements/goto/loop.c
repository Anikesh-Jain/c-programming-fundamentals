#include<stdio.h>
int main() 
{
    int i,n;
    printf("enter any number = ");
    scanf("%d" , &n);
    i=0;
    printnum:
             printf("%d\n" , i);
             i++;
    while(i<=n)
             goto printnum;
    return 0;
}