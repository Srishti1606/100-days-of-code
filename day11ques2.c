Write a program to find profit or loss percentage given cost price and selling price.
  #include <stdio.h>

int main() {
    float costPrice, sellingPrice, percentage;

    printf("Enter cost price: ");
    scanf("%f", &costPrice);

    printf("Enter selling price: ");
    scanf("%f", &sellingPrice);

    if (sellingPrice > costPrice) {
        percentage = ((sellingPrice - costPrice) / costPrice) * 100;
        printf("Profit = %.2f%%\n", percentage);
    } 
    else if (sellingPrice < costPrice) {
        percentage = ((costPrice - sellingPrice) / costPrice) * 100;
        printf("Loss = %.2f%%\n", percentage);
    } 
    else {
        printf("No Profit No Loss\n");
    }

    return 0;
}
