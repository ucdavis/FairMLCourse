#include <stdio.h>


int main() {
    // initializations
    // initialize a char array with len = 100
    char message[100];
    // creates a pointer to a string containing the characters "John"
    // and initializes the pointer to point to the beginning of that string
    char *name = "John";
    int age = 30;
    float height = 1.8;

    // Use sprintf() to create a formatted string
    sprintf(message, "Hello, my name is %s. I am %d years old and %.1f meters tall.", name, age, height);

    // Print the formatted string to the console
    printf("%s", message);

    return 0;
}
