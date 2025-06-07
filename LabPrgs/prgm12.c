//This program is to compute the sum of first 'n' terms of series = 1+1/2+1/3+1/4...//
#include <stdio.h>
int main(){
    float c,n,sum=0;
    printf("Enter Length of Series: ");
    scanf("%f",&n);
    c=1;
    while(c<=n){
        sum += 1/c;
        c++;
    }
    printf("%f",sum);
    return 0;
}
