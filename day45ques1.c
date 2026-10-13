Count frequency of a given character in a string.
 #include <stdio.h>

int main(void) {
    char str[1000];
    char target;
    int count = 0;

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 1;
    }

    printf("Enter the character to count: ");
    if (scanf(" %c", &target) != 1) {
        return 1;
    }

    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] == target) {
            count++;
        }
    }

    printf("'%c' appears %d time(s).\n", target, count);
    return 0;
} 
  
