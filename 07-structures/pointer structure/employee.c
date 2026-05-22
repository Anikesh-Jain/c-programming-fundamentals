#include<stdio.h>
struct emp
{
    int code;
    char name[50];
    float salary;
};

void data(struct emp *);
int main()
{
    struct emp a;
    printf("enter emp code = ");
    scanf("%d" , &a.code);
    printf("enter emp name = ");
    scanf("%s" , &a.name);
    printf("enter emp salary = ");
    scanf("%f" , &a.salary);
    data(&a);
    return 0;
}
    void data(struct emp *a)
    {
        printf("\nemp code = %d" , a->code);
        printf("\nemp name = %s" , a->name);
        printf("\nemp salary = %f" , a->salary);
    }
