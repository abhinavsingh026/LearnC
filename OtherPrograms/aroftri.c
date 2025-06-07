/*This is a program to find the area of a right angle triangle*/
#include <stdio.h>
int main(){
    setbuf(stdout,0);
    float b,h,ar;
    printf("Enter Base of Triangle: ");
    scanf("%f",&b);
    printf("Enter Height of Triangle: ");
    scanf("%f",&h);
    ar = 1.0/2*(b*h);
    if(ar < 20) {
        printf("Area of the Triangle is: %f\n",ar);
    }
    else {
        printf("Triangle is of area: %f\n",ar);
    }
    return 0;
}
