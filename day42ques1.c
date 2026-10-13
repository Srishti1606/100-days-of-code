Count vowels and consonants in a string.
  #include <stdio.h>
#include <ctype.h>

int main(void) {
    char str[1000];
    int vowels = 0, consonants = 0;

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 1;
    }

    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        char ch = (char)tolower((unsigned char)str[i]);

        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
