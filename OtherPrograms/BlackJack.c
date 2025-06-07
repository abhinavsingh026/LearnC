#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int pickRand() {
    return rand() % 11 + 1;
}

int main() {
    srand(time(0));
    char choice;
    const char *p1 = "Ashish";
    const char *p2 = "Abhinav";
    int score1 = 0;
    int score2 = 0;

    score1 += (pickRand() + pickRand()) % 22;
    score2 += (pickRand() + pickRand()) % 22;

    printf("--> Initial Scores <--\n");
    printf("%s ==> %d\n", p1, score1);
    printf("%s ==> %d\n", p2, score2);

    while (1) {
        printf("%s's Turn:\n", p1);
        printf("Stand: 's' or Hit: 'h': ");
        scanf(" %c", &choice);
        if (choice == 'h') {
            score1 += pickRand();
            printf("Current %s score %d\n", p1, score1);
        }
        if (score1 == 21) {
            printf("%s wins\n", p1);
            break;
        } else if (score1 > 21) {
            printf("%s wins\n", p2);
            break;
        }

        printf("%s's Turn:\n", p2);
        printf("Stand: 's' or Hit: 'h': ");
        scanf(" %c", &choice);
        if (choice == 'h') {
            score2 += pickRand();
            printf("Current %s score %d\n", p2, score2);
        }
        if (score2 == 21) {
            printf("%s wins\n", p2);
            break;
        } else if (score2 > 21) {
            printf("%s wins\n", p1);
            break;
        }
    }
    return 0;
}
