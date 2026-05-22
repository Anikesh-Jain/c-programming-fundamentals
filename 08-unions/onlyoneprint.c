#include<stdio.h>
union
{
    int code;
    char name[50];
    float salary;
}a;
int main()
{
    printf("enter emp code = ");
    scanf("%d" , &a.code);
    printf("enter emp name = ");
    scanf("%s" , &a.name);
    printf("enter emp salary = ");
    scanf("%f" , &a.salary);
    printf("\nemp code = %d" , a.code);
    printf("\nemp name = %s" , a.name);
    printf("\nemp salary = %f" , a.salary);
    return 0;
}