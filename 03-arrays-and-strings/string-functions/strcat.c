#include<stdio.h>
#include<string.h>
int main()
{
    char str1[50],str2[50];
    printf("enter your first string = ");
    gets(str1);
    printf("enter your second string = ");
    gets(str2);
    strcat(str1,str2);
    printf("new string = %s" , str1);
    return 0;
}