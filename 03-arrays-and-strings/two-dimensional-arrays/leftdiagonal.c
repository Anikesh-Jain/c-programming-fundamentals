#include<stdio.h>
int main () 
{
    int a[3][3],i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("enter array elements =");
            scanf("%d" , &a[i][j]);
        }
    }
    printf("2-D array left diagonal are printing =");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
              printf("%d" , a[i][j]);
        }
        printf("\n");
    }
    return 0;
}