#include<stdio.h.>
int main() {
    int month;
    printf("enter number between 1 to 12");
    scanf("%d" , &month);
    if(month==1)
        printf("january");
    else if(month==2)
        printf("feburary");
    else if(month==3)
        printf("march");
    else if(month==4)
        printf("april");
    else if(month==5)
        printf("may");
    else if(month==6)
        printf("june");
    else if(month==7)
        printf("july");
    else if(month==8)
        printf("august");
    else if(month==9)
        printf("september");
    else if(month==10)
        printf("october");
    else if(month==11)
        printf("novmber");
    else if(month==12)
        printf("december");
    else
        printf("invalid input");
    return 0;
    

}