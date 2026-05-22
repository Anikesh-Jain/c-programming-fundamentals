#include<stdio.h>
int main () 
{
    int a[3][3],i,j,n;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("enter array elements =");
            scanf("%d" , &a[i][j]);
        }
    }
    printf("enter the element to find its coordinate = \n");
    scanf("%d" , &n);
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           if(n==a[i][j])
            {    printf("element found at a[%d][%d] position",i,j);
                return 0;
            } 
        }
    }
    printf("element not found");
    return 0;
}