#include<stdio.h>
int main()
{
    int n,fact=1;
    printf("enter any number to print factorial =");
    scanf("%d" , &n);
    while(n>=1)
    {
        fact=fact*n;
        n--;
    }
    printf("\n factorial=%d" , fact);

    return 0;
}