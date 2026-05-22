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
    printf("\nemp code = %d" , a.code);
    printf("\nenter emp name = ");
    scanf("%s" , &a.name);
    printf("\nemp name = %s" , a.name);
    printf("\nenter emp salary = ");
    scanf("%f" , &a.salary);
    printf("\nemp salary = %f" , a.salary);
    return 0;
}