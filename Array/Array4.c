//This program is to take few integers and find sum of positive and negative integers//
#include <stdio.h>
int main(){
    int i,n,num[50],ps=0,ns=0;
    printf("Enter the No. of Integers:- ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter Integer %d:- ",i+1);
        scanf("%d",&num[i]);
        if(num[i]>=0)
            ps+=num[i];
        else
            ns+=num[i];
    }
    printf("Sum of Positive Integers is: %d\n",ps);
    printf("Sum of Negative Integers is: %d",ns);
    return 0;
}
