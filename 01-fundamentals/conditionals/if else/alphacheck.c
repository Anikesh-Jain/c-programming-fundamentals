#include<stdio.h>
int main() {
    char x;
    printf("enter any character =");
    scanf("%C" , &x);
    if((x>'a' && x<'z')||(x>'A' && x<'Z'))
       printf("x is a aplhabet");
    else
       printf("x is not a aplhabet pls check");
    return 0;
}