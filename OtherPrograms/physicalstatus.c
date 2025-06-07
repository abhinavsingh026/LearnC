#include <stdio.h>
int main(){
    float ht;
    printf("Enter your height in CMs: ");
    scanf("%f",&ht);
    if(ht > 200)
        printf("You're Abnormal");
    else
    {
        if(ht > 180)
            printf("You're Tall");
        else
        {
            if(ht > 165)
                printf("You're Average");
            else
            {
                if(ht > 150)
                    printf("You're Short");
                else
                    printf("You're Dwarf");
            }
        }
    }
    return 0;
}
