Check if two strings are anagrams of each other.
  #include <stdio.h>
#include <ctype.h>

int main(void) {
    char first[1000], second[1000];
    int counts[26] = {0};
    int areAnagrams = 1;

    printf("Enter the first string: ");
    if (fgets(first, sizeof(first), stdin) == NULL) {
        return 1;
    }

    printf("Enter the second string: ");
    if (fgets(second, sizeof(second), stdin) == NULL) {
        return 1;
    }

    for (int i = 0; first[i] != '\0'; i++) {
        unsigned char ch = (unsigned char)first[i];
        if (isalpha(ch)) {
            counts[tolower(ch) - 'a']++;
        }
    }

    for (int i = 0; second[i] != '\0'; i++) {
        unsigned char ch = (unsigned char)second[i];
        if (isalpha(ch)) {
            counts[tolower(ch) - 'a']--;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (counts[i] != 0) {
            areAnagrams = 0;
            break;
        }
    }

    if (areAnagrams) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are not anagrams.\n");
    }

    return 0;
}
