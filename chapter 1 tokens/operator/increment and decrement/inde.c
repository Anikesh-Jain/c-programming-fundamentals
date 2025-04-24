#include<stdio.h>
int main(){
    int a;
    printf("enter value of a=");
    scanf("%d" , &a);
    printf("\n afte prefix increment = %d" , ++a);
    printf("\n afte prefix decrement = %d" , --a);
    printf("\n afte postfix increment = %d" , a++);
    printf("\n afte postfix decrement = %d" , a--);
    printf("\n value of a = %d" , a);
    return 0;
    
}