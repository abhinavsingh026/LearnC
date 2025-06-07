//This program is to print sum and product of digit of a integer//
#include <stdio.h>
int main(){
    int n,r,ds=0,dp=1;
    printf("Enter a Integer: ");
    scanf("%d",&n);
    while(n>0){
        r = n % 10;
        ds += r;
        dp *= r;
        n /= 10;   
    }
    printf("Sum Of The Digits are: %d\n",ds);
    printf("Product Of The Digits are: %d",dp);
    return 0;
}
