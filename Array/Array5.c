//This program is to take few no. from the user and find smallest no.//
#include <stdio.h>
int main(){
    int i,n,num[50],min=num[0];
    printf("Enter how mant no.s are to be taken:- ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter No. %d:- ",i+1);
        scanf("%d",&num[i]);
        if(num[i]<min)
            min=num[i];
    }
    printf("Smallest no. in the series is:- %d",min);
    return 0;
}