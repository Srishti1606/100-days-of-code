Print all enum names and integer values using a loop.
  #include <stdio.h>

enum UserRole {
    ADMIN = 1,
    USER,
    GUEST
};

int main(void) {
    const char *names[] = {"ADMIN", "USER", "GUEST"};

    for (int i = 0; i < 3; i++) {
        printf("%s = %d\n", names[i], ADMIN + i);
    }

    return 0;
}
