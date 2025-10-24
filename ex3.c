//Write a program that asks "Do you have a cat or a dog?" and then prints what sound that pet makes.
#include <stdio.h>
#include <string.h>
int main() {
    char a;
    printf("Do you have cat or dog? \n");
    printf("press 'C or c' for cat and 'D or d' for dog :");
    scanf("%c", &a);

    if (a == 'c'  || a == 'C' ) {
        printf("miaww \n");
    }else if (a == 'd'  || a == 'D' ) {
        printf("Hav Hav\n");
    }else {
        printf("please use correct character\n");
    }

}

