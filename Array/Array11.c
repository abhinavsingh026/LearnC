//This program is to take 3x4 integer matrix and calculate sum of all elements of the matrix//
#include <stdio.h>
int main(){
    int r,c,sum=0,mat[3][4];
    for(r=0;r<3;r++){
        for(c=0;c<4;c++){
            printf("Enter %d row and %d column of the matrix:- ",r+1,c+1);
            scanf("%d",&mat[r][c]);
            sum += mat[r][c];
        }
    }
    printf("\nSum of all elements of matrix is: %d",sum);
    return 0;
}
