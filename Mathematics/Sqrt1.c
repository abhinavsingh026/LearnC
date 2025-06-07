// This program is to find square root of 2 degree equation//
#include <stdio.h>
#include <math.h>
int main(){
    float a,b,c,d,r1,r2;
    printf("Enter the value of 1st , 2nd and 3rd co-efficients: ");
    scanf("%f%f%f",&a,&b,&c);
    d=pow(b,2)-(4*a*c);
    printf("The value of d is: %f\n",d);
    if(d>0){
        printf("The Roots are Real and Distinct\n");
        r1=(-b+pow(d,0.5))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf("Fisrt Root is: %f\t",r1);
        printf("Second Root is: %f\n",r2);
    }
    else if(d=0){
        printf("The Roots are Real and Equal\n");
        r1=r2=(-b)/(2*a);
        printf("The Roots are: %f & %f\n",r1,r2);
    }
    else
        printf("The Roots are Imaginary");
    return 0;
}
