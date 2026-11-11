Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
#include <stdio.h>

enum UserRole {
    ADMIN = 1,
    USER,
    GUEST
};

int main(void) {
    int choice;

    printf("Choose a role (1=ADMIN, 2=USER, 3=GUEST): ");
    if (scanf("%d", &choice) != 1) {
        return 1;
    }

    switch (choice) {
        case ADMIN:
            printf("Welcome, admin. You have full access.\n");
            break;
        case USER:
            printf("Welcome, user. You have standard access.\n");
            break;
        case GUEST:
            printf("Welcome, guest. You have limited access.\n");
            break;
        default:
            printf("Invalid role.\n");
    }

    return 0;
}
