//This program is to check if the no. is prime or not//
#include <stdio.h>
int main(){
    int n,c,r,sm=0;
    printf("Enter a Natural no.: ");
    scanf("%d",&n);
    c = 1;
    do{
        r = n%c;
        if(r==0)
            sm++;
        c++;
        }while (c<=n);
    if(sm==2)
        printf("\n\tNumber is Prime\n\t");
    else
        printf("\n\tNumber is Not prime\n\t");
    return 0;
}
