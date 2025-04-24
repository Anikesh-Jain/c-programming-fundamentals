#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("enter any number =");
    scanf("%d" , &n);
    for( ;n>0;n/=10)
    {
        sum=sum+n%10*n%10;
    }
    printf("sum=%d" , sum);
    return 0;
}