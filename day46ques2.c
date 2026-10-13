Find the first repeating lowercase alphabet in a string
#include <stdio.h>

int main(void) {
    char str[1000];
    int seen[26] = {0};
    int found = 0;

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 1;
    }

    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            int index = str[i] - 'a';

            if (seen[index]) {
                printf("First repeating lowercase alphabet: %c\n", str[i]);
                found = 1;
                break;
            }

            seen[index] = 1;
        }
    }

    if (!found) {
        printf("No lowercase alphabet repeats.\n");
    }

    return 0;
}
