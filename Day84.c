Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
  #include <stdio.h>

enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main(void) {
    enum Status status = SUCCESS;  // Change this value to test other messages

    switch (status) {
        case SUCCESS:
            printf("Operation succeeded.\n");
            break;
        case FAILURE:
            printf("Operation failed.\n");
            break;
        case TIMEOUT:
            printf("Operation timed out.\n");
            break;
    }

    return 0;
}
