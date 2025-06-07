//This program is to take input of a array and find a element in it//
#include <stdio.h>
int main(){
    int i,n,ele,c=0,a[50];
    printf("Enter no. of elements of array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter element %d:- ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nEnter the element to be searched: ");
    scanf("%d",&ele);
    for(i=0;i<n;i++){
        if(a[i]==ele){
            c=1;
            printf("Array index of Element is: %d\n",i);
            break;
        }
    }
    if(c==1)
        printf("%d is present",ele);
    else
        printf("%d is NOT present",ele);
    return 0;
}
