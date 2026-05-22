#include<stdio.h>
int main()
{
    int n,sum=0,rem,org;
    printf("enter any number =");
    scanf("%d" , &n);
    org=n;
    for( ;n>0;n/=10)
    {
        rem=n%10;
        sum=sum+rem*rem*rem;
    }
    if(org==sum)
        printf("number is armstrong number");
    else
        printf("number is not armstrong number");
    return 0;
}