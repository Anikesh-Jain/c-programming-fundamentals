#include<stdio.h>
int main()
{
    int a,b;
    char c;
    printf("enter any character =");
    scanf("%c" , &c);
    printf("enter any two number =");
    scanf("%d%d" , &a,&b);
    
    switch (c){
        case '+':
        printf("addition=%d" , a+b);
        break;
        case '-':
        printf("subtraction=%d" , a-b);
        break;
        case '*':
        printf("multilpy=%d" , a*b);
        break;
        case '/':
        printf("division=%d" , a/b);
        break;
        default :
        printf("not valid info");
        break; 
    }
    return 0;
}