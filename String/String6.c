//This program is to check strcpy() function//
#include <stdio.h>
#include <string.h>
int main(){
    char str1[30],str2[] = "Thiruvanantpuram";
    strcpy(str1,str2);
    printf("\n%s",str1);
    return 0;
}
