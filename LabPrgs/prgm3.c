//This program is to reverse a number//
#include <stdio.h>
int main(){
    int n1,r,rv=0;
    printf("Enter a Number: ");
    scanf("%d",&n1);
    while(n1>0){
        r = n1%10;
        rv = rv*10+r;
        n1 /= 10;
    }
    printf("Reversed Number is \"%d\"\n",rv);
    for(;n1>0;){
        r = n1%10;
        rv = rv*10+r;
        n1 /= 10;
    }
    printf("Reversed Number is: \'%d\'",rv);
    return 0;
}
