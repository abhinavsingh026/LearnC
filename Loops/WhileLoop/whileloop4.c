//This program is to print Fibonacci series of 'n' terms//
#include <stdio.h>
int main(){
    int n,c,t1=0,t2=1,t3;
    printf("Enter value of n: ");
    scanf("%d",&n);
    printf("\n Following is the Fibnoacci series of %d terms \n",n);
    printf("%d %d ",t1,t2);
    c = 3;
    while(c<=n){
        t3 = t1 + t2;
        printf("%d ",t3);
        t1 = t2;
        t2 = t3;
        c++;
    }
    return 0;
}
