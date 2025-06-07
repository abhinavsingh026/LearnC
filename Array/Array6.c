//This program is to take few no.s from the user and find Largest no.//
#include <stdio.h>
int main(){
    int i,n,num[50],max=num[0];
    printf("Enter how many no.s are to be taken: ");
    scanf("%d",&n);
    printf("%d\n",max);
    for(i=0;i<n;i++){
        printf("Enter no. %d:- ",i+1);
        scanf("%d",&num[i]);
        if(num[i]>max)
            max=num[i];
    }
    printf("Largest no. in the series is:- %d",max);
    return 0;
}
