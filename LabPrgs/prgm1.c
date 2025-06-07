//This program is to perform input/output of all basic data types//
#include <stdio.h>
int main(){
    char c;
    int n;
    float f;
    double d;
    printf("Enter a Character: ");
    scanf("%c",&c);
    printf("You Entered Character \"%c\"\n",c);
    printf("Enter a Integer: ");
    scanf("%d",&n);
    printf("You Entered a Integer \"%d\"\n",d);
    printf("Enter a Float: ");
    scanf("%f",&f);
    printf("Your Entered a float \"%f\"\n",f);
    printf("Enter a Double: ");
    scanf("%lf",&d);
    printf("You Entered double \"%lf\"",d);
    return 0;
}
