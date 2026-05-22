#include <stdio.h>
int div(int,int);
int main()
{
    int a,b,c,division;
    printf("enter any two number=");
    scanf("%d%d" , &a,&b);
    division=div(a,b);
    printf("\ndivision=%d" , division);
    return 0;
}
int div(int a, int b)
{
    int c;
    c=a/b;
    return c;
}

    