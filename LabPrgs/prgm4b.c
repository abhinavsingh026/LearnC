#include <stdio.h>
int main(){
    int n1,n2;
    printf("Enter two Natural no.s: ");
    scanf("%d %d",&n1,&n2);
    printf("No.s before Swapping: %d %d\n",n1,n2);
    n1=n1+n2;
    n2=n1-n2;
    n1=n1-n2;
    printf("No.s after Swapping are: %d %d",n1,n2);
    return 0;
}
