#include<stdio.h>
int main() {
    int age,salary;
    printf("enter employe age =");
    scanf("%d" , &age);
    printf("enter employe salary =");
    scanf("%d" , &salary);
    if(age>50)
      {
        if(salary<50000)
          printf("there will be an 10per increment in the salary ");
        else
          printf("there will be no increment in the salary due to high salary");
      }
    else
        printf("there will no increment due to below age");
    return 0;

}