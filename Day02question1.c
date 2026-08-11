Write a program to calculate the area and perimeter of a rectangle given its length and breadth.#include <stdio.h>

// Function to calculate area
double calculateArea(double length, double width) {
    return length * width;
}

// Function to calculate perimeter
double calculatePerimeter(double length, double width) {
    return 2 * (length + width);
}

int main() {
    double length, width;

    printf("Enter the length of the rectangle: ");
    if (scanf("%lf", &length) != 1 || length <= 0) {
        printf("Invalid input. Length must be a positive number.\n");
        return 1;
    }

    printf("Enter the width of the rectangle: ");
    if (scanf("%lf", &width) != 1 || width <= 0) {
        printf("Invalid input. Width must be a positive number.\n");
        return 1;
    }

    double area = calculateArea(length, width);
    double perimeter = calculatePerimeter(length, width);

    printf("Area of the rectangle: %.2lf\n", area);
    printf("Perimeter of the rectangle: %.2lf\n", perimeter);

    return 0;
}

  
