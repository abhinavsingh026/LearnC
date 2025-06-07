//This program is to check word is palindrome or not//
#include <stdio.h>
#include <string.h>
int main(){
    char word[30],reve[30];
    int l,i,j;
    printf("Enter a word: ");
    scanf("%s",&word);
    l = strlen(word);
    for(i=l-1,j=0;i>=0;i--,j++){
        reve[j] = word[i];
    }
    reve[j]='\0';
    if(strcmp(word,reve)==0)
        printf("Word is Palindrome");
    else
        printf("Word isn't a Palindrome");
    return 0;
}
