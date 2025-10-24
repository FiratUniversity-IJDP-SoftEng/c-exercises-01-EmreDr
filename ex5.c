//Write a function called sayHello that takes a person's name and prints "Hello" with their name.
//Made by Muhammed Emre Dere
#include <stdio.h>
void sayHello(const char* name) {

    printf("Hello, %s!\n", name);
}
int main() {
    char usersName[50];

    printf("Please enter your name: ");
    scanf("%49s", usersName);
    sayHello(usersName);
}
