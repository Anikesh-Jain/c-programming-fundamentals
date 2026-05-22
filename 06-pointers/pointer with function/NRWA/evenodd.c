#include<stdio.h>
void evenodd(int*p);
int main()
{
    int a,*p;
    printf("enter any  number = ");
    scanf("%d%d" , &a);
    p=&a;
    evenodd(p);
    return 0;
}
void evenodd(int*p)
{
    if (*p%2==0)
       printf("number is even");
    else
       printf("number is odd");
}