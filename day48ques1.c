Check if one string is a rotation of another.
  #include <stdio.h>

int main(void) {
    char first[1000], second[1000];
    int len1 = 0, len2 = 0;
    int isRotation = 0;

    printf("Enter the first string: ");
    if (fgets(first, sizeof(first), stdin) == NULL) return 1;

    printf("Enter the second string: ");
    if (fgets(second, sizeof(second), stdin) == NULL) return 1;

    /* Find lengths, excluding the newline from fgets. */
    while (first[len1] != '\0' && first[len1] != '\n') len1++;
    while (second[len2] != '\0' && second[len2] != '\n') len2++;

    if (len1 == len2) {
        if (len1 == 0) {
            isRotation = 1;
        } else {
            /*
             * A rotation of first is found by matching second against
             * the doubled string first + first.
             */
            for (int start = 0; start < len1 && !isRotation; start++) {
                int j = 0;

                while (j < len1 &&
                       second[j] == first[(start + j) % len1]) {
                    j++;
                }

                if (j == len1) {
                    isRotation = 1;
                }
            }
        }
    }

    if (isRotation) {
        printf("The strings are rotations of each other.\n");
    } else {
        printf("The strings are not rotations of each other.\n");
    }

    return 0;
}
