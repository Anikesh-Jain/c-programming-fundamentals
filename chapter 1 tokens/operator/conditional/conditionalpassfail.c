#include<stdio.h>
int main(){
    int percentage;
    printf("enter your percentage =");
    scanf("%d" , &percentage);
    (percentage>=33)?printf("pass"):printf("fail");
    return 0;
}