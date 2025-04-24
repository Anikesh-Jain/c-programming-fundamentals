#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter any three number =");
    scanf("%d%d%d" , &a,&b,&c);
    (a>b && a<c)||(a<b && a>c)?printf("a is middle number"):(b>a && b<c)||(b<a && b>c)?printf("b is middle number"):printf("c is middle number");
    return 0;
    
}