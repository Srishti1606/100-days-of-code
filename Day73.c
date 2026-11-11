Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines
#include <stdio.h>
#include <ctype.h>

int main(void) {
    FILE *file = fopen("info.txt", "r");
    if (file == NULL) {
        perror("Could not open info.txt");
        return 1;
    }

    long long characters = 0;
    long long words = 0;
    long long lines = 0;
    int in_word = 0;
    int ch;
    int has_content = 0;
    int last_char = '\0';

    while ((ch = fgetc(file)) != EOF) {
        characters++;
        has_content = 1;
        last_char = ch;

        if (ch == '\n') {
            lines++;
        }

        if (isspace((unsigned char)ch)) {
            in_word = 0;
        } else if (!in_word) {
            words++;
            in_word = 1;
        }
    }

    if (ferror(file)) {
        perror("Error reading file");
        fclose(file);
        return 1;
    }

    // Count a final line that does not end with a newline.
    if (has_content && last_char != '\n') {
        lines++;
    }

    fclose(file);

    printf("Characters: %lld\n", characters);
    printf("Words: %lld\n", words);
    printf("Lines: %lld\n", lines);

    return 0;
}
