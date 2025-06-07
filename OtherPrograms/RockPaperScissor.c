#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int pickRand() {
    return rand() % 3;
}
int main() {
    srand(time(0));
    int totalPlays = 0;
    int userWins = 0;
    int choice;
    while(1) {
        printf("1. Rock\n2. Paper\n3. Scissor\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        int sysRand = pickRand();
        switch(choice) {
            case 1:

        }
    }
    return 0;
}
