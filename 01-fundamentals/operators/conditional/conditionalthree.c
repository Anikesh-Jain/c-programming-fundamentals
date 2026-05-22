#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter any three number =");
    scanf("%d%d%d" , &a,&b,&c);
    (a>b && a>c)?printf("a is max"):(b>a && b>c)?printf("b is max"):printf("c is max");
    return 0;
    
}