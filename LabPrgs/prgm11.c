//This program is to compute first 'n' terms of series= 1-2+3-4+5...//
#include <stdio.h>
int main(){
    int c,n,sum=0;
    printf("Enter the length of series: ");
    scanf("%d",&n);
    c = 1;
    while(c<=n){
        if(c%2==0)
            sum -= c;
        else
            sum += c;
        c++;
    }
    printf("%d",sum);
    return 0;
}
