//This program is check if the no. is odd or even//
#include <stdio.h>
int main(){
    int n;
    printf("Enter a Natural No.: ");
    scanf("%d",&n);
    if(n%2==0)
        printf("%d is Even",n);
    else
        printf("%d is Odd",n);
    return 0;
}
