//This program is to check if matrix is symmetric//
#include <stdio.h>
int main(){
    int r,c,rn,cn,flag=0;
    float mat[10][10],tm[10][10];
    printf("Enter No. of Rows and Column of the Matrix: ");
    scanf("%d%d",&rn,&cn);
    if(rn!=cn)
        printf("Matrix is NOT symmetric");
    else{
        for(r=0;r<rn;r++){
            for(c=0;c<cn;c++){
                printf("Matrix element at:[%d][%d] = ",r+1,c+1);
                scanf("%f",&mat[r][c]);
                tm[c][r]=mat[r][c];
            }
        }
        for(r=0;r<rn;r++){
            for(c=0;c<cn;c++){
                if(tm[r][c]!=mat[r][c])
                    flag++;
            }
        }
    if(flag==0)
        printf("\nMatrix is SYMMETRIC");
    else
        printf("\nMatrix is NOT symmetric");
    }
   return 0;
}
