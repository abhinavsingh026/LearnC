//check if function if functioning or not in simple interest function//
#include <stdio.h>
float si(float p,float r,float t){
    float s;
    s = (p*r*t)/100;
    return s;
}
int main(){
    float p,r,t;
    printf("Enter Principal amount , rate and time: ");
    scanf("%f%f%f",&p,&r,&t);
    printf("Simple Interest is: %f",si(p,r,t));
    return 0;
}
