//This program is to compute factors of a given no.//
#include <stdio.h>
int main(){
    int c,n;
    printf("Enter a Natural no.: ");
    scanf("%d",&n);
    printf("Following are the Factors of %d\n",n);
    for(c=1;c<=n;c++){
        if(n%c==0)
            printf("%d\t",c);
    }
    return 0;
}
