//This program is to find Largest element of 4x6 matrix//
#include <stdio.h>
int main(){
    int r,c;
    float mat[4][6],max=mat[0][0];
    for(r=0;r<4;r++){
        for(c=0;c<6;c++){
            printf("Enter %d row and %d column of matrix:- ",r+1,c+1);
            scanf("%f",&mat[r][c]);
            if(mat[r][c]>max)
                max=mat[r][c];
        }
    }
    printf("\nMaximum element in this matrix is: %f",max);
    return 0;
}
