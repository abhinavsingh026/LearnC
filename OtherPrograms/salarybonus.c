#include <stdio.h>
int main(){
    float sal,exp;
    char stat;
    int bonus = 0;
    printf("Enter your salary in Rupees: ");
    scanf("%f",&sal);
    printf("Enter your experience in Years: ");
    scanf("%f",&exp);
    printf("Enter your Martial Status in m/u or M/U: ");
    scanf(" %c",&stat);
    if(stat == 'm'|| stat == 'M')
        bonus += 25000;
    if(sal < 20000)
        bonus += 25000;
    if(exp > 5)
        bonus += 25000;
    printf("Congratulations!You're eligible for %d",bonus);
    return 0;
}
