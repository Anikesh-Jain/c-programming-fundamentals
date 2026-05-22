#include<stdio.h>
int main() {
    int marks,attendance;
    printf("enter student marks=");
    scanf("%d" , &marks);
    printf("enter student attendance =");
    scanf("%d" , &attendance);
    if(marks>300)
      {
        if(attendance>75)
          printf("student is pass ");
        else
          printf("student is fail due to low attendance");
      }
    else
        printf("student is fail due to both marks and attendance");
    return 0;
}