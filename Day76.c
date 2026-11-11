Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.
  #include <stdio.h>

int main(void) {
    char filename[256];
    char line[512];

    printf("Enter filename: ");
    if (scanf("%255s", filename) != 1) {
        return 1;
    }

    FILE *file = fopen(filename, "r");

    if (file == NULL) {
        printf("Error: file does not exist or cannot be opened.\n");
        return 1;
    }

    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }

    if (ferror(file)) {
        perror("Error reading file");
        fclose(file);
        return 1;
    }

    fclose(file);
    return 0;
}
