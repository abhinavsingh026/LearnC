//This program is to take sentence from the user and count no. of words init//
#include <stdio.h>
#include <string.h>
int main(){
    char sen[300];
    int i,l,c=0;
    printf("Enter a sentence: ");
    gets(sen);
    l = strlen(sen);
    for(i=0;i<l;i++){
        if(sen[i]==' '||sen[i]==','||sen[i]=='.'||sen[i]=='!'||sen[i]=='?')
            c++;
    }
    printf("No. of Words in sentece is: %d",c);
    return 0;
}
