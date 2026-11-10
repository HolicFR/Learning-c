#include <stdio.h>

int main() {

    int maxscore = 500;
    int userscore = 423;

    float percentage = (float) userscore / maxscore * 100.0;
    
    printf("The user score is %.2f\n", percentage);
    return 0;

}