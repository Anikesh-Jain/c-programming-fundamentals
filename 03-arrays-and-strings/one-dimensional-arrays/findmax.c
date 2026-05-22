#include<stdio.h>
int main()
{
    int a[5],i,m;
    for(i=0;i<5;i++)
    {
        printf("enter array elements =");
        scanf("%d" , &a[i]);
    }
    m>a[0];
    for(i=0;i<5;i++)
    {
        if(a[i]>m)
           m=a[i];
    }
    printf("max no =%d" ,m);
    return 0;
}