//Write a program that asks for someone's age and prints "Happy Birthday!" that many times.
// Made by Muhammed Emre Dere
#include <stdio.h>
int main() {

    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    for (int i = 1; i <= age; i++) {
        printf( "Happy Birthday \n" );
    }

}


