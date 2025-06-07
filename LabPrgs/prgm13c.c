//This program is to print 1,2,3... ka badhta hua pyramid//
#include <stdio.h>
int main(){
    int r,c,n,s,num=0;
    printf("Enter the no. of lines of pyramid: ");
    scanf("%d",&n);
    for(r=1;r<=n;r++){
        for(s=1;s<=n-r;s++)
            printf(" ");
        for(c=1;c<=r;c++){
            printf("%d ",++num);
        }
        printf("\n");
    }
    return 0;
}
