#include<stdio.h>
int main() 
{
    int n,*p;
    printf("enter any number = ");
    scanf("%d" , &n);
    p=&n;
    if(*p%2==0)
       printf("number is even");
    else
       printf("number is odd");
    return 0;
}
