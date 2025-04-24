#include<stdio.h>
int main()
{
    int i,n;
    printf("enter any number to print the table =");
    scanf("%d" , &n);
    for(i=1;i<=10;i++)
    {
        printf("%d\n" , n*i);
    }
    return 0;
}