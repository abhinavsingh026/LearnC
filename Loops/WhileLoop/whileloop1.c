//This is a program to calculate sum of the digits of a number using while loop//
#include <stdio.h>
int main(){
    int n,r,ds = 0;
    printf("Enter a Natural No.: ");
    scanf("%d",&n);
    while(n>0){
        r=n%10;
        ds+=r;
        n/=10;
    }
    printf("Sum of Digits of Natual No. is: %d",ds);
    return 0;
}
