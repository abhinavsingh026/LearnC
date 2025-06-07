//This program is to display your date of birth in a month//
#include <stdio.h>
#include <stdlib.h>
int main(){
    int dob;
    printf("Enter your DATE of birth in a month: ");
again:scanf("%d",&dob);
    if(dob>31) {
        printf("Enter correct DATE of your birth: ");
        goto again;
    }
    else
        printf("Your DOB is %d",dob);
    return 0;
}
