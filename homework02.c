#include <stdio.h>

int main() {
    char name[50];
    char carNumber[20];
    int hours;
    float rate, total;

    printf("++++++++++++++++++++++++++\n");
    printf("Program Rent Taxi\n");
    printf("++++++++++++++++++++++++++\n");
    printf("Enter name for rent : ");
    scanf("%s", name);

    printf("Enter car number for rent : ");
    scanf("%s", carNumber);

    printf("Enter hour for rent : ");
    scanf("%d", &hours);

    // กำหนดอัตราค่าเช่าตามชั่วโมง
    if (hours >= 1 && hours <= 5) {
        rate = 100.00;
    } else if (hours >= 6 && hours <= 10) {
        rate = 90.50;
    } else if (hours >= 11 && hours <= 15) {
        rate = 80.00;
    } else {
        rate = 70.50;
    }

    total = rate * hours;

    printf("++++++++++++++++++++++++++\n");
    printf("Pay for rent is : %.2f\n", total);
    printf("++++++++++++++++++++++++++\n");
    return 0;
}
