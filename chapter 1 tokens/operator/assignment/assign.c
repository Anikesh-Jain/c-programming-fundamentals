#include<stdio.h>
int main(){
    int a,b;
    a=4;
    b=2;
    a+=b;
    printf("\n a+=b is %d" , a);
    a-=b;
    printf("\n a-=b is %d" , a);
    a*=b;
    printf("\n a*=b is %d" , a);
    a/=b;
    printf("\n a/=b is %d" , a);
    a%=b;
    printf("\n a%=b is %d" , a);
    return 0;
}