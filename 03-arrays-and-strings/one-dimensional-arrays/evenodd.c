#include <stdio.h>
int main()
{
    int a[5],i,sum=0,pro=1;
    for(i=0;i<5;i++)
    {
        printf("enter array elements = ");
        scanf("%d",&a[i]);
        
    }
    for(i=0;i<5;i++)
    {
        if(a[i]%2==0)
          sum=sum+a[i];
        else
          pro=pro*a[i];
    }
    printf("sum=%d",sum);
    printf("pro=%d",pro);
    return 0;
}