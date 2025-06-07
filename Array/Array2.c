/*This program is to calculate average age of 60 students of a class*/
#include <stdio.h>
int main(){
    int i;
    float age[6],avg;
    for(i=0;i<6;i++){
        printf("Enter age of Student %d:- ",i+1);
        scanf("%f",&age[i]);
        avg+=age[i]/6;
    }
    printf("Average age of Students is %f",avg);
    return 0;
}
