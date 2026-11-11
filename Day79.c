A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.\
  #include <stdio.h>

int main(void) {
    FILE *file = fopen("numbers.txt", "r");
    if (file == NULL) {
        perror("Could not open numbers.txt");
        return 1;
    }

    long long sum = 0;
    long long count = 0;
    int number;

    while (fscanf(file, "%d", &number) == 1) {
        sum += number;
        count++;
    }

    if (ferror(file)) {
        perror("Error reading numbers.txt");
        fclose(file);
        return 1;
    }

    fclose(file);

    if (count == 0) {
        printf("No integers found.\n");
        return 0;
    }

    printf("Sum: %lld\n", sum);
    printf("Average: %.2f\n", (double)sum / count);

    return 0;
}
  
