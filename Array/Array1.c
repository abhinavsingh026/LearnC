//This program is to calculate average marks of 60 students of a class//
#include <stdio.h>
int main(){
    int i;
    float n[60],avg=0;
    for(i=0;i<60;i++){
        printf("Enter marks of student %d:- ",i+1);
        scanf("%f",&n[i]);
        avg+=n[i]/60;
    }
    printf("Average Marks of Students is %f",avg);
    return 0;
}
