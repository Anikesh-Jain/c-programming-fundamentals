#include<stdio.h>
struct emp
{
    int code;
    char name[50];
    float salary;
};
int main()
{
    struct emp a;
    printf("\n size of a = %d byte" , sizeof (a));
    printf("\n size of a = %s byte" , sizeof (a));
    printf("\n size of a = %f byte" , sizeof (a));
    return 0;
}