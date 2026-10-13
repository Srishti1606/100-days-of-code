Reverse each word in a sentence without changing the word order.
#include <stdio.h>

int main(void) {
    char sentence[1000];
    int start = 0, end = 0;

    printf("Enter a sentence: ");
    if (fgets(sentence, sizeof(sentence), stdin) == NULL) {
        return 1;
    }

    while (sentence[end] != '\0' && sentence[end] != '\n') {
        end++;
    }

    /* Reverse the characters in each word, leaving spaces in place. */
    while (start < end) {
        if (sentence[start] == ' ') {
            start++;
        } else {
            int wordEnd = start;
            while (wordEnd < end && sentence[wordEnd] != ' ') {
                wordEnd++;
            }

            int left = start;
            int right = wordEnd - 1;
            while (left < right) {
                char temp = sentence[left];
                sentence[left] = sentence[right];
                sentence[right] = temp;
                left++;
                right--;
            }

            start = wordEnd;
        }
    }

    sentence[end] = '\0';
    printf("Result: %s\n", sentence);

    return 0;
}
