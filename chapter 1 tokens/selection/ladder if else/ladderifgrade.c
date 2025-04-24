#include<stdio.h.>
int main() {
    int percentage;
    printf("enter your percentage");
    scanf("%d" , &percentage);
    if(percentage>75)
        printf("A");
    else if(percentage>55)
        printf("B");
    else if(percentage>40)
        printf("C");
    else
        printf("FAIL");
    return 0;

       
}
