//This program is to Multiply two matrices//
#include <stdio.h>
int main(){
    int r,c,rn1,cn1,rn2,cn2;
    float mat1[10][10],mat2[10][10];
    printf("Enter No. of Rows and Columns of 1st Matrix: ");
    scanf("%d%d",&rn1,&cn1);
    printf("Enter No. of Rows and Columns of 2nd Matrix: ");
    scanf("%d%d",&rn2,&cn2);
    float ansm[rn1][cn2];
    if(cn1 != rn2)
        printf("The Matrices Can't be Multiplied");
    else{
        for(r=0;r<rn1;r++){
            for(c=0;c<cn1;c++){
                printf("Enter Matrix element at[%d][%d] = ",r+1,c+1);
                scanf("%f",&mat1[r][c]);
            }
        }
        for(r=0;r<rn2;r++){
            for(c=0;c<cn2;c++){
                printf("Enter Matrix element at[%d][%d] = ",r+1,c+1);
                scanf("%f",&mat2[r][c]);
            }
        }
    }
    return 0;
}
