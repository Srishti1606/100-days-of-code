Print initials of a name with the surname displayed in full.
  #include <stdio.h>
#include <ctype.h>

int main(void) {
    char name[1000];
    int length = 0;

    printf("Enter a full name: ");
    if (fgets(name, sizeof(name), stdin) == NULL) {
        return 1;
    }

    while (name[length] != '\0' && name[length] != '\n') {
        length++;
    }

    /* Find the start of the last word. */
    int surnameStart = length;
    while (surnameStart > 0 && isspace((unsigned char)name[surnameStart - 1])) {
        surnameStart--;
    }
    while (surnameStart > 0 && !isspace((unsigned char)name[surnameStart - 1])) {
        surnameStart--;
    }

    /* Print initials for the words before the surname. */
    for (int i = 0; i < surnameStart; i++) {
        if (!isspace((unsigned char)name[i]) &&
            (i == 0 || isspace((unsigned char)name[i - 1]))) {
            printf("%c. ", (char)toupper((unsigned char)name[i]));
        }
    }

    /* Print the surname in full. */
    if (surnameStart < length) {
        for (int i = surnameStart; i < length; i++) {
            putchar(name[i]);
        }
        putchar('\n');
    }

    return 0;
}
