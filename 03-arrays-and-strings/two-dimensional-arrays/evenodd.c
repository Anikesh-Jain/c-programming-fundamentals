#include<stdio.h>
int main () 
{
    int a[3][3],i,j,sum=0,pro=1;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("enter array elements =");
            scanf("%d" , &a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i][j]%2==0)
               sum=sum+a[i][j];
            else
               pro=pro*a[i][j];
        }
    }
    printf("sum=%d" , sum);
    printf("pro=%d" , pro);
    return 0;
}