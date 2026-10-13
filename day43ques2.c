Check if a string is a palindrome.
#include <stdio.h>
#include <ctype.h>

int main(void) {
    char str[1000];
    int left = 0, right = 0;
    int palindrome = 1;

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 1;
    }

    /* Find the last character, excluding the newline. */
    while (str[right] != '\0' && str[right] != '\n') {
        right++;
    }
    right--;

    while (left < right) {
        while (left < right && isspace((unsigned char)str[left])) {
            left++;
        }
        while (left < right && isspace((unsigned char)str[right])) {
            right--;
        }

        if (tolower((unsigned char)str[left]) !=
            tolower((unsigned char)str[right])) {
            palindrome = 0;
            break;
        }

        left++;
        right--;
    }

    if (palindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
