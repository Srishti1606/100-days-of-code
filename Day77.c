Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.
  #include <stdio.h>
#include <ctype.h>

int main(void) {
    FILE *input = fopen("input.txt", "r");
    if (input == NULL) {
        perror("Could not open input.txt");
        return 1;
    }

    FILE *output = fopen("output.txt", "w");
    if (output == NULL) {
        perror("Could not open output.txt");
        fclose(input);
        return 1;
    }

    int ch;
    while ((ch = fgetc(input)) != EOF) {
        if (fputc(toupper((unsigned char)ch), output) == EOF) {
            perror("Error writing output.txt");
            fclose(input);
            fclose(output);
            return 1;
        }
    }

    if (ferror(input)) {
        perror("Error reading input.txt");
        fclose(input);
        fclose(output);
        return 1;
    }

    if (fclose(input) == EOF || fclose(output) == EOF) {
        perror("Error closing file");
        return 1;
    }

    printf("Converted text written to output.txt.\n");
    return 0;
}
