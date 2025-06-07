//This function is to check functioning of area of right angle triangle//
#include <stdio.h>
float area(float b,float h){
    float ar;
    ar = (b*h)/2;
    return ar;
}
int main(){
    float b,h;
    printf("Enter Base & Height of Triangle: ");
    scanf("%f%f",&b,&h);
    printf("Area of Triangle is %f",area(b,h));
    return 0;
}
