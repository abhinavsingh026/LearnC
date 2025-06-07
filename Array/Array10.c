//This program is to insert and delete a element in array//
#include <stdio.h>
int main(){
    int a[10],i,n,pos,ele;
    printf("Enter no. of elements of Array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter %d element of array: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("Enter no. to be switched: ");
    scanf("%d",ele);
    printf("Enter Position of element: ");
    scanf("%d",pos);
    for(i=n-1;i>=pos;i--)
        a[i+1]=a[i];
    a[pos] = ele;
    n=n+1;
    return 0;
}
