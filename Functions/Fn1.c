//This program is to check function is functioning or not//
#include <stdio.h>
    int sum(int a,int b){
        int s;
        s = a+b;
        return s;
    }
int main(){
    int a,b,r;
    printf("Enter the value of a and b: ");
    scanf("%d%d",&a,&b);
    //Call Function
    r = sum(a,b);
    printf("%d",r);
    return 0;
}
