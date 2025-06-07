//This Program is to check whether a character is vowel or consonant//
#include <stdio.h>
#include <ctype.h>
int main(){
    char ch;
    printf("Enter a Character: ");
    scanf("%c",&ch);
    ch = tolower(ch);
    if(ch =='a'|| ch == 'e'|| ch =='i'|| ch == 'o'|| ch == 'u')
        printf("%c is Vowel",ch);
    else if(ch >= 'a' && ch <= 'z')
        printf("%c is Consonant",ch);
    else
        printf("%c is not an Alphabet Character",ch);
    return 0;
}
