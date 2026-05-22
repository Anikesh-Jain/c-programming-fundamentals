#include<stdio.h>
int main(){
    int i,sum=0;
    i=1;
    while(i<=10) {   
        sum=sum+i;
        i=i+1; 
    }
    printf("sum=%d" , sum);
    return 0;
}