#include<stdio.h>
struct emp
{
    int code;
    char name[50];
    float salary;
};
int main()
{
    struct emp a[5];
    int i;
    for(i=0;i<5;i++)
    {
        printf("enter emp code = ");
        scanf("%d" , &a[i].code);
        printf("enter emp name = ");
        scanf("%s" , &a[i].name);
        printf("enter emp salary = ");
        scanf("%f" , &a[i].salary);
    }
    for(i=0;i<5;i++)
    {
        printf("\nemp code = %d" , a[i].code);
        printf("\nemp name = %s" , a[i].name);
        printf("\nemp salary = %f" , a[i].salary);
    }
    return 0;
}