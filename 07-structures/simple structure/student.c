#include<stdio.h>
struct student
{
    int rollno;
    char name[50];
    float marks;
};
int main()
{
    struct student a;
    printf("enter student rollno = ");
    scanf("%d" , &a.rollno);
    printf("enter student name = ");
    scanf("%s" , &a.name);
    printf("enter student marks = ");
    scanf("%f" , &a.marks);
    printf("\nstudent rollno = %d" , a.rollno);
    printf("\nstudent name = %s" , a.name);
    printf("\nstudent marks = %f" , a.marks);
    return 0;
}