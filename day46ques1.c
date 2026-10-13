Remove all vowels from a string.
  #include <stdio.h>

int main(void) {
    char str[1000];
    int read = 0, write = 0;

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 1;
    }

    while (str[read] != '\0') {
        char ch = str[read];

        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&
            ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U') {
            str[write++] = str[read];
        }
        read++;
    }

    str[write] = '\0';

    printf("String without vowels: %s", str);
    return 0;
}
