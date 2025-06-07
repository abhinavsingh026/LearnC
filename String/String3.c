//Find no. of vowels in the string//
#include <stdio.h>
#include <string.h>
int main(){
    char st[50];
    int l,i,c1=0,c2=0;
    printf("Enter a string: ");
    gets(st);
    l = strlen(st);
    for(i=0;i<l;i++){
        if(st[i]=='a'||st[i]=='e'||st[i]=='i'||st[i]=='o'||st[i]=='u'||st[i]=='A'||st[i]=='E'||st[i]=='I'||st[i]=='O'||st[i]=='U')
            c1++;
        else
            c2++;
    }
    printf("No. of vowels in string is = %d",c1);
    printf("\nNo. of consonants in string is = %d",c2);
    return 0;
}
