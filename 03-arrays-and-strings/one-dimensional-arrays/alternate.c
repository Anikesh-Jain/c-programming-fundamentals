#include<stdio.h>
int main()
{
    int a[5],i;
    for(i=0;i<5;i++)
    {
        printf("enter array elements =");
        scanf("%d" , &a[i]);
    }
    printf("alternate elements are printing = ");
    for(i=0;i<5;i=i+2)
    {
        printf("%d\t" , a[i]);
    }
    return 0;
}