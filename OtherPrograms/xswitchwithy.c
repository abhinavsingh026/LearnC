#include <stdio.h>
int main(){
    float x,n,y;
    printf("Enter the value of x: ");
    scanf("%f",&x);
    printf("Enter the value of n: ");
    scanf("%f",&n);
    switch((int)n)
    {
        case 1:
            y=x+n;
            printf("y1=%f",y);
            break;
        case 2:
            y=x-n;
            printf("y2=%f",y);
            break;
        case 3:
            y=x*n;
            printf("y3=%f",y);
            break;
        default:
            y=x/n;
            printf("%f",y);
    }
    return 0;
}
