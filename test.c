#include <stdio.h>

int main() {
    char name[50]; // Declare a string to store the name

    // Prompt the user for input
    printf("Enter your name: ");
    scanf("%49s", name); // Read input (up to 49 characters to avoid overflow)

    
