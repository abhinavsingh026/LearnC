#include <stdio.h>
int main(){
    int i,n,a[10],sum=0,avg,max=a[0],min=a[0];
    printf("Enter the Length of The Array: ");
    scanf("%d",&n);
    printf("\nEnter the elements in Array:-\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum += a[i];
    }
    printf("\nThe Even No.s in this Array are:-\n");
    for(i=0;i<n;i++){
        if(a[i]%2==0)
            printf("%d ",a[i]);
    }
    printf("\nThe Odd No.s in This Array are:-\n");
    for(i=0;i<n;i++){
        if(a[i]%2!=0)
            printf("%d ",a[i]);
    }
    avg=sum/n;
    printf("\nSum of Elements of Array is: %d\n",sum);
    printf("\nAverage of Elements of Array is: %d\n",avg);
    for(i=1;i<n;i++){
        if(a[i]>max)
            max=a[i];
    }
    printf("\nMax Element in Array is: %d\n",max);
    for(i=1;i<n;i++){
        if(a[i]<min)
            min=a[i];
    }
    printf("\nMin Element in Array is: %d\n",min);
    return 0;
}
