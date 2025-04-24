#include<stdio.h>
int main() {
    int prelimsmarks,mainsmarks,interviewmarks;
    printf("enter student prelimsmarks =");
    scanf("%d" , &prelimsmarks);
    printf("enter student mainsmarks");
    scanf("%d" , &mainsmarks);
    printf("enter student interviewmarks");
    scanf("%d" , &interviewmarks);
    if(prelimsmarks>500)
      {
        if(mainsmarks>300)
        {
            if(interviewmarks>95)
               printf("student is pass");
            else
               printf("student is not qualified interview");
        }
        else
            printf("student is not qualified for mains");
      }
    else
        printf("student is not qualified for prelims student is fail");
    return 0;
}