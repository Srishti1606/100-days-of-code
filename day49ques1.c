Print the initials of a name.
  #include <stdio.h>
#include <ctype.h>

int main(void) {
    char name[1000];

    printf("Enter a full name: ");
    if (fgets(name, sizeof(name), stdin) == NULL) {
        return 1;
    }

    printf("Initials: ");

    for (int i = 0; name[i] != '\0' && name[i] != '\n'; i++) {
        if (!isspace((unsigned char)name[i]) &&
            (i == 0 || isspace((unsigned char)name[i - 1]))) {
            printf("%c. ", (char)toupper((unsigned char)name[i]));
        }
    }

    printf("\n");
    return 0;
}
