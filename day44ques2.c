Replace spaces with hyphens in a string.
  #include <stdio.h>

int main(void) {
    char str[1000];

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 1;
    }

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            str[i] = '-';
        }
    }

    printf("Updated string: %s", str);
    return 0;
}
