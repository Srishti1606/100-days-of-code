Change the date format from dd/04/yyyy to dd-Apr-yyyy.
  #include <stdio.h>

int main(void) {
    int day, month, year;
    char extra;

    printf("Enter a date (dd/04/yyyy): ");

    if (scanf("%d/%d/%d%c", &day, &month, &year, &extra) != 4 ||
        extra != '\n' || month != 4 || day < 1 || day > 30) {
        printf("Invalid date format or date.\n");
        return 1;
    }

    printf("%02d-Apr-%04d\n", day, year);
    return 0;
}
