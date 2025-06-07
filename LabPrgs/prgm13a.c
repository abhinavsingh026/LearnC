//This program is to print a pyramid of stars(*) taking no. of lines(n) from the user//
#include <stdio.h>
int main(){
    int r,c,c2,s,n;
    //r = row,c = column,s = space,n = no. of lines
    printf("Enter no. of lines for the Pyramid: ");
    scanf("%d",&n);
    for(r=1;r<=n;r++){
        for(s=1;s<=n-r;s++)
            printf(" ");
        for(c=1;c<=r;c++)
            printf("*");
        for(c2=1;c2<r;c2++)
            printf("*");
        printf("\n");
    }
    return 0;
}
