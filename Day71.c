Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.
  #include <stdio.h>

int main(void) {
    char name[100];
    int age;

    printf("Enter your name: ");
    if (scanf("%99s", name) != 1) {
        return 1;
    }

    printf("Enter your age: ");
    if (scanf("%d", &age) != 1) {
        return 1;
    }

    FILE *file = fopen("info.txt", "w");
    if (file == NULL) {
        perror("Could not create info.txt");
        return 1;
    }

    fprintf(file, "Name: %s\nAge: %d\n", name, age);

    if (fclose(file) != 0) {
        perror("Could not save info.txt");
        return 1;
    }

    printf("Data successfully saved to info.txt.\n");
    return 0;
}
