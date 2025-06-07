//This program is to check string concatenate function strcat()//
#include <stdio.h>
#include <string.h>
int main(){
    char s1[100],s2[100],s3[100];
    printf("Enter 1st string: ");
    gets(s1);
    printf("Enter 2nd string: ");
    gets(s2);
    strcat(s3,s2);
    strcat(s3,s1);
    printf("%s",s3);
    return 0;
}
