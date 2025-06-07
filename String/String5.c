//This progarm is to check which string is bigger//
#include <stdio.h>
#include <string.h>
int main(){
    char str1[50],str2[50];
    printf("Enter 1st String: ");
    gets(str1);
    printf("Enter 2nd String: ");
    gets(str2);
    if(strcmp(str1,str2)==0)
        printf("Both String is of same size");
    if(strcmp(str1,str2)>0)
        printf("1st String is Bigger");
    if(strcmp(str1,str2)<0)
        printf("2nd String is Bigger");
    printf("\n%d",strcmp(str1,str2));
    return 0;
}
