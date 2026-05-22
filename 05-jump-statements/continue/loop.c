#include<stdio.h>
int main()
{
    int i;
    i=0;
    while(i<=10)
    {
         i++;
        if(i==5)
           continue;
           printf("%d\n" , i);
          
    }
    return 0;
}