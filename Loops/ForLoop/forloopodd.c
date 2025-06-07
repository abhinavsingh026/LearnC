#include <stdio.h>
#include <stdlib.h>
int main(){
    int nat,n,c;
    printf("Enter a natural no.: ");
    scanf("%d",&nat);
    printf("Enter the value of n: ");
    scanf("%d",&n);
    system("clear");
    for(c=1;c<=n;c++){
        if(nat%2==0)
            nat+=1;
        else
            nat+=2;
        printf("%d\t",nat);
    }
    return 0;
}
