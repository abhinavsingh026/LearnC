//This program is function a functioning of swapping two numbers//
#include <stdio.h>
float swap(float n1,float n2){
    float temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
    return n1;
}
int main(){
    float n1,n2;
    printf("Enter 1st and 2nd No. = ");
    scanf("%f%f",&n1,&n2);
    printf("Numbers Before Swapping are %f and %f\n",n1,n2);
    printf("Numbers After Swapping are %f and %f",swap(n1,n2),swap(n2,n1));
    return 0;
}
