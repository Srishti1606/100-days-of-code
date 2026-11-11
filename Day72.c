Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should print all the lines to the console until EOF (end of file) is reached.
#include <stdio.h>

int main(void) {
    FILE *file = fopen("info.txt", "r");
    if (file == NULL) {
        perror("Could not open info.txt");
        return 1;
    }

    char line[256];

    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }

    if (ferror(file)) {
        perror("Error while reading info.txt");
        fclose(file);
        return 1;
    }

    fclose(file);
    return 0;
}
