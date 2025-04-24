#include<stdio.h>
int main()
{
    int i,n;
    printf("enter any number to print table = ");
    scanf("%d" , &n);
    i=1;
    while(i<=10)
    {
        printf("%d \n" , n*i);
        i=i+1;
    }
    return 0;
}