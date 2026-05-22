#include<stdio.h>
#include<string.h>
int main()
{
    char str1[50],str2[50];
    printf("enter your string = ");
    gets(str2);
    strcpy(str1,str2);
    printf("copied string = %s" , str1);
    return 0;
}