Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
  #include <stdio.h>
#include <string.h>

int main(void) {
    char s[100000];
    if (fgets(s, sizeof(s), stdin) == NULL) {
        return 1;
    }

    // Remove the newline, if present.
    s[strcspn(s, "\n")] = '\0';

    int last_seen[256];
    for (int i = 0; i < 256; i++) {
        last_seen[i] = -1;
    }

    int start = 0;
    int max_length = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        unsigned char ch = (unsigned char)s[i];

        if (last_seen[ch] >= start) {
            start = last_seen[ch] + 1;
        }

        last_seen[ch] = i;

        int length = i - start + 1;
        if (length > max_length) {
            max_length = length;
        }
    }

    printf("%d\n", max_length);
    return 0;
}
