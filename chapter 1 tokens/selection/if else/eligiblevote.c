#include<stdio.h>
int main()
{
    int age;
    printf("enter your age =");
    scanf("%d" , &age);
    if(age >= 18)
      printf("person is eligible to vote");
    else
      printf("person is not eligible to vote");
    return 0;
}