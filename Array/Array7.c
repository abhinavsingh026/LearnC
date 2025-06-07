//This program is to take two array inputs and add them//
#include <stdio.h>
int main(){
    int i,n,a1[50],a2[50],sum[50];
    printf("Enter The No. of Elements of Array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter 1st Array Element %d:- ",i+1);
        scanf("%d",&a1[i]);
    }
    printf("\n");
    for(i=0;i<n;i++){
        printf("Enter 2nd Array Element %d:- ",i+1);
        scanf("%d",&a2[i]);
    }
    printf("\n");
    printf("Element wise addition of Both Array is \n");
    for(i=0;i<n;i++){
        sum[i]=a1[i]+a2[i];
    printf("%d\t",sum[i]);
    }
    return 0;
}
