#include<stdio.h>
int main()
{
    int n,rem,sum=0;
    printf("enter any number to print the sum of the digits =");
    scanf("%d" , &n);
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem*rem*rem;
        n=n/10;
    }
    printf("\n sum=%d" , sum);
    return 0;
}