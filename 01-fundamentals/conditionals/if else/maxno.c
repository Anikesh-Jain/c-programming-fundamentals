#include<stdio.h>
int main()
{
    int a,b;
    printf("enter any two numbers");
    scanf("%d%d" , &a,&b);
    if(a>b)
       printf("a is maximum");
    else
       printf("b is maximum");

    return 0;

}