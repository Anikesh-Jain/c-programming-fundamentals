#include<stdio.h>
union
{
    int code;
    char name[50];
    float salary;
}a;
int main()
{

    printf("\n size of a = %d byte" , sizeof (a));
    printf("\n size of a = %s byte" , sizeof (a));
    printf("\n size of a = %f byte" , sizeof (a));
    return 0;
}