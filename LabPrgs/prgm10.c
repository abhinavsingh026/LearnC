//This program is to check largest no. among 3 no.s//
#include <stdio.h>
int main(){
    int n1,n2,n3,max;
    printf("Enter Three Numbers: ");
    scanf("%d %d %d",&n1,&n2,&n3);
    if(n1>n2 && n1>n3)
        max = n1;
    else if(n2>n3 && n2>n1)
        max = n2;
    else
        max = n3;
    printf("Maximum among these three no.s is %d\n",max);
    return 0;
}
