#include<stdio.h>
int fact(int);
int main()
{
    int n , factorial;
    printf("enter any value of n = ");
    scanf("%d" , &n);
    factorial = fact(n);
    printf("factorial=%d" , factorial);
    return 0;
}
int fact(int n)
{
    int f;
    if(n==0)
       return 1;
    else
    f=n*fact(n-1);
    return f;
}