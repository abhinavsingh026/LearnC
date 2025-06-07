//this program is to take a word and display it in upper case//
#include <stdio.h>
#include <string.h>
int main(){
    char wd[30];
    int i,l;
    printf("Enter a word: ");
    scanf("%s",wd);
    l = strlen(wd);
    for(i=0;i<l;i++){
        if(wd[i]>=97 && wd[i]<=122)
            wd[i] = wd[i]-32;
    }
    printf("Word in Upper case is: %s\n",wd);
    for(i=0;i<l;i++){
        if(wd[i]>=65 && wd[i]<=90)
            wd[i] = wd[i]+32;
    }
    printf("Word in Lower case is: %s",wd);
    return 0;
}
