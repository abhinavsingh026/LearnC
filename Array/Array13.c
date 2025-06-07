//Printing a basic matrix whose data is known//
#include <stdio.h>
int main(){
    int r,c;
    //Before declaration [row][column]//
    int mat[4][5] = {
        {1,2,3,4,5},
        {2,4,6,8,10},
        {3,6,9,12,15},
        {4,8,12,16,20}
    };
    //After declaration [row index][column index]//
    mat[2][3]=17;
    for(r=0;r<4;r++){
        for(c=0;c<5;c++){
            printf("%d ",mat[r][c]);
        }
        printf("\n");
    }
    printf("Element at mat[3][4] is: %d\n",mat[2][3]);
    return 0;
}
