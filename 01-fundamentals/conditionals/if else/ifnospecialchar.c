#include<stdio.h>
int main() {
    char x;
    printf("enter any character =");
    scanf("%c" , &x);
    if((x>'a' && x<'z')||(x>'A' && x<'Z'))
           printf("x is a aplhabet");
    else if(x>=0 && x<=9)
           printf("x is a digit");
    else 
           printf("x is a special character");
    return 0;
}