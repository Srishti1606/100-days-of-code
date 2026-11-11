Show that enums store integers by printing assigned values.
  #include <stdio.h>

enum Status {
    SUCCESS = 10,
    FAILURE = 20,
    TIMEOUT = 30
};

int main(void) {
    enum Status status = FAILURE;

    printf("Enum value as an integer: %d\n", status);
    printf("SUCCESS = %d\n", SUCCESS);
    printf("FAILURE = %d\n", FAILURE);
    printf("TIMEOUT = %d\n", TIMEOUT);

    return 0;
}
