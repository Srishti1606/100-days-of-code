Find the longest word in a sentence.
#include <stdio.h>
#include <ctype.h>

int main(void) {
    char sentence[1000];
    int longestStart = 0, longestLength = 0;
    int currentStart = 0, currentLength = 0;

    printf("Enter a sentence: ");
    if (fgets(sentence, sizeof(sentence), stdin) == NULL) {
        return 1;
    }

    for (int i = 0; ; i++) {
        if (isalpha((unsigned char)sentence[i])) {
            if (currentLength == 0) {
                currentStart = i;
            }
            currentLength++;
        } else {
            if (currentLength > longestLength) {
                longestStart = currentStart;
                longestLength = currentLength;
            }
            currentLength = 0;

            if (sentence[i] == '\0' || sentence[i] == '\n') {
                break;
            }
        }
    }

    if (longestLength == 0) {
        printf("No words found.\n");
    } else {
        printf("Longest word: ");
        for (int i = longestStart; i < longestStart + longestLength; i++) {
            putchar(sentence[i]);
        }
        putchar('\n');
    }

    return 0;
}
