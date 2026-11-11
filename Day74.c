Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().
#include <stdio.h>

int main(void) {
    char source_name[256];
    char destination_name[256];

    printf("Enter source filename: ");
    if (scanf("%255s", source_name) != 1) {
        return 1;
    }

    printf("Enter destination filename: ");
    if (scanf("%255s", destination_name) != 1) {
        return 1;
    }

    FILE *source = fopen(source_name, "r");
    if (source == NULL) {
        perror("Could not open source file");
        return 1;
    }

    FILE *destination = fopen(destination_name, "w");
    if (destination == NULL) {
        perror("Could not open destination file");
        fclose(source);
        return 1;
    }

    int ch;
    while ((ch = fgetc(source)) != EOF) {
        if (fputc(ch, destination) == EOF) {
            perror("Error writing destination file");
            fclose(source);
            fclose(destination);
            return 1;
        }
    }

    if (ferror(source)) {
        perror("Error reading source file");
        fclose(source);
        fclose(destination);
        return 1;
    }

    if (fclose(source) == EOF || fclose(destination) == EOF) {
        perror("Error closing file");
        return 1;
    }

    printf("File copied successfully.\n");
    return 0;
}
