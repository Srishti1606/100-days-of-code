Convert a lowercase string to uppercase without using built-in functions.
  #include <stdio.h>

int main(void) {
    char str[1000];

    printf("Enter a lowercase string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 1;
    }

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A');
        }
    }

    printf("Uppercase string: %s", str);
    return 0;
}
