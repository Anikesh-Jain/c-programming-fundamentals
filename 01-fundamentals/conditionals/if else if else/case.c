#include<stdio.h>
int main() {
    char x;
    printf("enter any character");
    scanf("%C", &x);
    if(x >= 'a' && x <= 'z')
       printf("x is lower case");
    else if(x>='A'&& x <='Z')
       printf("x is upper case");
    else
       printf("x is not alphabet");
    return 0;    
}