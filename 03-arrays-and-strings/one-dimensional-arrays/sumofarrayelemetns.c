#include <stdio.h>
int main()
{
    int a[5],i,sum=0;
    for(i=0;i<5;i++)
    {
        printf("enter array elements = ");
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        sum=sum+a[i];
    }
    printf("sum=%d",sum);
    return 0;
}