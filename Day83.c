create an enum for months and print how many days each month has.
#include <stdio.h>

enum Month {
    JANUARY = 1, FEBRUARY, MARCH, APRIL, MAY, JUNE,
    JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER
};

int main(void) {
    const char *month_names[] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    const int days[] = {
        31, 28, 31, 30, 31, 30,
        31, 31, 30, 31, 30, 31
    };

    for (enum Month month = JANUARY; month <= DECEMBER; month++) {
        int index = month - JANUARY;
        printf("%s: %d days\n", month_names[index], days[index]);
    }

    return 0;
}
