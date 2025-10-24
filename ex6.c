//readibility test
//Made by Muhammed Emre Dere.
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {

    char text[2000];

    printf("Text: ");


    if (fgets(text, sizeof(text), stdin) == NULL) {

        printf("Error reading input.\n");
        return 1;
    }

    int totalLetters = 0;
    int totalWords = 0;
    int totalSentences = 0;

    int length = strlen(text);

    if (length > 0 && text[0] != '\n') {
        totalWords = 1;
    }


    for (int i = 0; i < length; i++) {

        char c = text[i];

        if (isalpha(c)) {
            totalLetters++;
        }else if (c == ' ') { 
            totalWords++;
        }else if (c == '.' || c == '!' || c == '?'|| c == ',') {
            totalSentences++;
        }
    }

    if (totalWords == 0) {
        printf("Before Grade 1\n");
        return 0;
    }

    float L = (float)totalLetters / (float)totalWords * 100.0;
    float S = (float)totalSentences / (float)totalWords * 100.0;
    float index = 0.0588 * L - 0.296 * S - 15.8;
    int grade = (int)round(index);


    if (grade < 1) {
        printf("Before Grade 1\n");
    } else if (grade >= 16) {
        printf("Grade 16+\n");
    } else {
        printf("Grade %d\n", grade);
    }

    return 0;
}


