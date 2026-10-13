Reverse a string.
  #include <stdio.h>

int main(void) {
    char str[1000];
    int length = 0;

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 1;
    }

    /* Find the length without counting the newline. */
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    printf("Reversed string: ");
    for (int i = length - 1; i >= 0; i--) {
        putchar(str[i]);
    }
    putchar('\n');

    return 0;
}
