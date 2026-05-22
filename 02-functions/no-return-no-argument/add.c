#include <stdio.h>
void add(void);
int main() {
    add();
    return 0;
}
void add(void)
{
    int a,b,c;
    printf("enter value of a and b =");
    scanf("%d%d", &a,&b);
    c=a+b;
    printf("\naddition=%d" , c);
}