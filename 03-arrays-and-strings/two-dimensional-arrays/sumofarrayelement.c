#include<stdio.h>
int main () 
{
    int a[3][3],i,j,sum=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("enter array elements =");
            scanf("%d" , &a[i][j]);
        }
    }
    printf("sum of 2-D array elements = \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum=sum+a[i][j];
        }
        
    }
    printf("sum=%d", sum);
    return 0;
}