#include <stdio.h>
int main(){
    char cc;
    printf("Enter colour code: ");
    scanf("%c",&cc);
    switch(cc)
    {
        case 'b':
            printf("Black");
            break;
        case 'r':
            printf("Red");
            break;
        case 'p':
            printf("Pink");
            break;
        case 'g':
            printf("Green");
            break;
        case 'w':
            printf("White");
            break;
        default:
            printf("You've entered wrong colour code");
    }
    return 0;
}