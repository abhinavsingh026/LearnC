//This program is to calculate product of two NATURAL no.s//
#include <stdio.h>
int main(){
    int n1,n2;
    printf("Enter Two Natural no.s: ");
    scanf("%d%d",&n1,&n2);
    if(n1>0 && n2>0)
        printf("Product = %d",n1*n2);
    else
        printf("Enter Both Natural Numbers");
    return 0;
}
