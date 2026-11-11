Write a program to take a string input. Change it to sentence case.
#include <stdio.h>
#include <ctype.h>

int main(void) {
    char str[100000];

    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 1;
    }

    // Capitalize the first letter; make the remaining letters lowercase.
    int first_letter = 1;

    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char ch = (unsigned char)str[i];

        if (isalpha(ch)) {
            if (first_letter) {
                str[i] = (char)toupper(ch);
                first_letter = 0;
            } else {
                str[i] = (char)tolower(ch);
            }
        }
    }

    printf("%s", str);
    return 0;
}
