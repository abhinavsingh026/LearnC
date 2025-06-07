#include <stdio.h>
int main(){
    float x,n;
    printf("Enter the value of x: ");
    scanf("%f",&x);
    printf("Enter the value of n: ");
    scanf("%f",&n);
    if(n == 1)
        printf("y = %f",x+n);
    else if(n == 2)
        printf("y = %f",x-n);
    else if(n == 3)
        printf("y = %f",x*n);
    else
        printf("y = %f",x/n);
    return 0;
}
