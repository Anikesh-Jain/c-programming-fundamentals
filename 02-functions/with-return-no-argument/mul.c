#include<stdio.h>
int mul(void);
int main()
{
    int pro;
    pro=mul();
    printf("\nmultiplication=%d" , pro);
    return 0;
}
int mul()
{
    int a,b,c;
    printf("enter any two number =");
    scanf("%d%d" ,&a,&b);
    c=a*b;
    return c;
}