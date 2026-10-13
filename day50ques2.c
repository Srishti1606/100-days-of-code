Print all sub-strings of a string.
  #include <stdio.h>

int main(void) {
    char str[1000];
    int length = 0;

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 1;
    }

    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    printf("All substrings:\n");

    for (int start = 0; start < length; start++) {
        for (int end = start; end < length; end++) {
            for (int i = start; i <= end; i++) {
                putchar(str[i]);
            }
            putchar('\n');
        }
    }

    return 0;
}
