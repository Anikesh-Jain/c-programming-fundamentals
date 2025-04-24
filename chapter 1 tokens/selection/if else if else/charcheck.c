#include<stdio.h>
int main() {
    char x;
    printf("enter any character=");
    scanf("%c", &x);
    if(x =='a'||x =='e'||x =='i'||x =='o'||x =='u'||x =='A'||x =='E'||x =='I'||x =='O'||x =='U')
        printf("character is vowel");
    else if(x >='a' && x <='z'||x >='A' && x <='Z')
        printf("charcter is consonant");
    else
        printf("character is not alphabet");
    return 0;   
 
}