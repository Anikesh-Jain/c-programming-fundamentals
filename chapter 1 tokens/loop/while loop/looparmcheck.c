#include<stdio.h>
int main()
{
    int n,org,rem,sum=0;
    printf("enter any number to chek its is a armstrong number or not =");
    scanf("%d" , &n);
    org=n;
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem*rem*rem;
        n=n/10;
    }
    if(org==sum)
       printf("number is a armstrong number");
    else
       printf("number is not armstrong number");
    return 0;

}