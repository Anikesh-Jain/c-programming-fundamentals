#include<stdio.h>
#include<string.h>
int main()
{
    char str1[50],str2[50];
    printf("enter your first string = ");
    gets(str1);
    printf("enter your second string = ");
    gets(str2);
    if (strcmp(str1 , str2)==0)
        printf("string is equal");
    else
        printf("string is not equal");
    return 0;
}