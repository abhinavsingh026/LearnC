//Take 10 No.s from the user and and calculate total no. of odd no.s entered//
#include <stdio.h>
int main(){
    int i,n[10],odd=0;
    for(i=0;i<10;i++){
        printf("Enter Number %d:- ",i+1);
        scanf("%d",&n[i]);
        if(n[i]%2== 1 || n[i]%2== -1)
            odd++;
    }
    printf("Total odd no.s in Array is: %d",odd);
    return 0;
}
