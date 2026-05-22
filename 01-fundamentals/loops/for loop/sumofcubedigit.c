#include<stdio.h>
int main()
{
    int n,sum=0,rem;
    printf("enter any number =");
    scanf("%d" , &n);
    for( ;n>0;n/=10)
    {
        rem=n%10;
        sum=sum+rem*rem*rem;
    }
    printf("sum=%d" , sum);
    return 0;
}