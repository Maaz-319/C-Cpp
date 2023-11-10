#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

void print_slowly(char source[]) {
    // Dynamically allocate memory for the destination string
    char *destination = malloc(strlen(source) + 1); // +1 for the null terminator

    // Check if memory allocation was successful
    if (destination == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(0); // Return an error code
    }

    // Copy the string to the dynamically allocated memory
    strcpy(destination, source);

    int arraySize = strlen(destination);  // Adjusted to use strlen for the correct size
    for (int i = 0; i < arraySize; i++) { // Adjusted the loop condition
        printf("%c", destination[i]);
        usleep(40000);
    }

    // No need to free(destination) here because it's not used beyond this point.
}