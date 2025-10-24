

#include <stdio.h>
// Guess number game -Made by Muhammed Emre Dere-
int main() {

    int correctNumber = 3;
    int guess;
  
    printf("Find secret number between 1-5\n");
    do {

        printf("Enter your guess(and please just use number I did not add anti infinityloop system ): ");
        scanf("%d", &guess);

        if (guess != correctNumber) {
            printf("Wrong guess. Try again\n");
        }
    } while (guess != correctNumber);
    printf("Congrats you find the number.\n");
    return 0;
}


