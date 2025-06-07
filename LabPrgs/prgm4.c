//This program is to swap two Numbers//
#include <stdio.h>
int main(){
    int n1,n2,v;
    printf("Enter Two No.s: ");
    scanf("%d %d",&n1,&n2);
    printf("No.s Before Swapping: \'%d\' \'%d\'\n ",n1,n2);
    v = n1;
    n1 = n2;
    n2 = v;
    printf("No.s After Swapping: \"%d\" \"%d\"\n",n1,n2);
    return 0;
}
