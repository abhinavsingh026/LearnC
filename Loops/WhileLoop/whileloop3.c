//This program is to take a natural no. from the user and reverse it//
#include <stdio.h>
int main(){
    int n,r,rv = 0;
    printf("Enter a natural no.: ");
    scanf("%d",&n);
    while(n>0){
        r = n%10;
        rv = rv*10+r;
        n /= 10;
    }
    printf("%d",rv);
    return 0;
}
