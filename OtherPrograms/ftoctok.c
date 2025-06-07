/*This a program to conver Farenheit to Celcius and Kelvin*/
#include <stdio.h>
int main(){
    float f,c,k;
    printf("Enter Temperature in Farenheit: ");
    scanf("%f",&f);
    c = 5*(f-32)/9;
    k = c + 273.15;
    printf("Entered Temperature in Celcius is: %f\n",c);
    printf("Entered Temperature in celcius is: %f",k);
    return 0;
}
