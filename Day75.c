Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.
  #include <stdio.h>

int main(void) {
    char line[1000];

    printf("Enter a line to append: ");
    if (fgets(line, sizeof(line), stdin) == NULL) {
        return 1;
    }

    FILE *file = fopen("info.txt", "a");
    if (file == NULL) {
        perror("Could not open info.txt");
        return 1;
    }

    if (fputs(line, file) == EOF) {
        perror("Error writing to info.txt");
        fclose(file);
        return 1;
    }

    if (fclose(file) == EOF) {
        perror("Error closing info.txt");
        return 1;
    }

    printf("Line appended successfully.\n");
    return 0;
}
