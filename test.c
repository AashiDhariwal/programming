#include <stdio.h>

int main() {
    char name[50]; // Declare a string to store the name

    // Prompt the user for input
    printf("Enter your name: ");
    scanf("%49s", name); // Read input (up to 49 characters to avoid overflow)

    // Display the result
    printf("Hello, %s! Welcome to C programming.\n", name);

    return 0;
}
