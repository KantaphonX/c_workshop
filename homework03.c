#include <stdio.h>

void main() {
    char homeNumber[100];
    int unit;
    float pricePerUnit, total;

    printf("--------------------------\n");
    printf("Program Pay Electric\n");
    printf("--------------------------\n");

    printf("Enter home number : ");
    scanf("%s", homeNumber);

    printf("Enter unit of electric : ");
    scanf("%d", &unit);

    // คำนวณ
    if (unit <= 20) {
        pricePerUnit = 5.00;
    } else if (unit <= 50) {
        pricePerUnit = 4.50;
    } else {
        pricePerUnit = 4.00;
    }

    total = unit * pricePerUnit;

    printf("--------------------------\n");
    printf("Pay for electric use is : %.2f\n", total);
    printf("--------------------------\n");

   
}