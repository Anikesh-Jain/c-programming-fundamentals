#include<stdio.h>
struct student
{
    char section[10];
    char name[50];
    float marks;
};
int main()
{
    struct student a[5];
    int i;
    for(i=0;i<5;i++)
    {
        printf("enter student section = ");
        scanf("%d" , &a[i].section);
        printf("enter student name = ");
        scanf("%s" , &a[i].name);
        printf("enter student marks = ");
        scanf("%f" , &a[i].marks);
    }
    for(i=0;i<5;i++)
    {
        printf("\nstudent section = %d" , a[i].section);
        printf("\nstudent name = %s" , a[i].name);
        printf("\nstudent marks = %f" , a[i].marks);
    }
    return 0;
}