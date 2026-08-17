Write a program to input a character and check whether it is a vowel or consonant using if–else.
#include <stdio.h>
#include <ctype.h> // for tolower() and isalpha()

int main() {
    char ch;

    printf("Enter a single alphabet character: ");
    if (scanf(" %c", &ch) != 1) { // Read a single character
        printf("Invalid input.\n");
        return 1;
    }

    // Check if the input is an alphabet
    if (!isalpha(ch)) {
        printf("Error: '%c' is not an alphabet.\n", ch);
        return 1;
    }

    // Convert to lowercase for easier comparison
    ch = tolower(ch);

    // Check for vowels
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("'%c' is a vowel.\n", ch);
    } else {
        printf("'%c' is a consonant.\n", ch);
    }

    return 0;
}
