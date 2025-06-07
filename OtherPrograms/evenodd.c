#include <stdio.h>
int main(){
    int n1;
    printf("Enter a Natural no. ");
    scanf("%d",&n1);
    if(n1%2==0)
        printf("Entered Natural no. is Even");
    else
        printf("Entered Natural no. is Odd");
    return 0;
}
