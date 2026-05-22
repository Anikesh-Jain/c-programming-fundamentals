#include<stdio.h>
void add(void);
void sub(void);
void mul(void);
void div(void);
int main() 
{
    add();
    sub();
    mul();
    div();
    return 0;
}
void add(void)
{
    int a,b,c;
    printf("enter any two number a and b =");
    scanf("%d%d" , &a,&b);
    c=a+b;
    printf("addition=%d" , c);
}
void sub(void)
{
    int a,b,c;
    printf("\nenter any two number a and b =");
    scanf("%d%d" , &a,&b);
    c=a-b;
    printf("subtraction=%d" , c);
}
void mul(void)
{
    int a,b,c;
    printf("\nenter any two number a and b =");
    scanf("%d%d" , &a,&b);
    c=a*b;
    printf("multiplication=%d" , c);
}
void div(void)
{
    int a,b,c;
    printf("\nenter any two number a and b =");
    scanf("%d%d" , &a,&b);
    c=a/b;
    printf("division=%d" , c);
}
