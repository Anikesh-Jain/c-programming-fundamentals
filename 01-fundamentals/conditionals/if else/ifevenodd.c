#include<stdio.h>
int main() {
    int n;
    printf("enetr any number =");
    scanf("%d" , &n);
    if(n%2==0)
        printf("number is even = %d" , n);
    else
        printf("number is odd = %d" , n);
    return 0;
}