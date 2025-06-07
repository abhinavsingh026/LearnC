//This program is to calculate sum of two matrices//
#include <stdio.h>
int main(){
    int r,c,rn1,cn1,rn2,cn2;
    float mat1[10][10],mat2[10][10],sum[10][10];
    printf("Enter no. of rows and columns of 1st matrix: ");
    scanf("%d%d",&rn1,&cn1);
    printf("Enter no. of rows and columns of 2nd matrix: ");
    scanf("%d%d",&rn2,&cn2);
    if(rn1 != rn2 || cn1 != cn2)
        printf("Addition of Matrix CAN'T be Performed");
    else{
        for(r=0;r<rn1;r++){
            for(c=0;c<cn1;c++){
                printf("Enter 1st Matrix [%d][%d]: ",r+1,c+1);
                scanf("%f",&mat1[r][c]);
            }
        }
        printf("\n");
        for(r=0;r<rn1;r++){
            for(c=0;c<cn1;c++){
                printf("Enter 2nd Matrix [%d][%d]: ",r+1,c+1);
                scanf("%f",&mat2[r][c]);
                sum[r][c] = mat1[r][c] + mat2[r][c];
            }
        }
        printf("\n");
        for(r=0;r<rn1;r++){
            for(c=0;c<cn1;c++){
                printf("%f ",sum[r][c]);
            }
            printf("\n");
        }
    }
    return 0;
} 
