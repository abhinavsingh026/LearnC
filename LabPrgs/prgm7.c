//This program is to take input of marks of 5 subjects and Find Total Marks,Percentage & Average//
#include <stdio.h>
int main(){
    int i,t=0,p,a,n[5];
    printf("Enter Marks of All Subjects Out Of 100 respectively: \n");
    for(i=0;i<5;i++){
        scanf("%d",&n[i]);
        t+=n[i];
    }
    printf("Total Marks Out of 500 are \"%d\"\n",t);
    p=(t*100/500);
    printf("Total percentage Obtained is \"%d%\"\n",p);
    a=t/5;
    printf("Average Marks Obtained is \"%d\"",a);
    return 0;
}
