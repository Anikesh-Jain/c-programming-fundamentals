#include<stdio.h>
int main() 
{
    int a,b,c,*p,*q;
    printf("enter any two number = ");
    scanf("%d%d" , &a,&b);
    p=&a;
    q=&b;
    c=*p+*q;
    printf("\naddition = %d" , c);
    return 0;
}
