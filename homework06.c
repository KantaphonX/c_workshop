#include <stdio.h>

void main() {
    int totalRooms = 10;
    float water_Rate = 12.50, electric_Rate = 8.00;
    char name[50];
    float rent, Water_Units, Electric_Units, TotalPay;

    printf("++++++++++++++++++++++++++++++++++++\n");
    printf("Program Rent Room\n");
    printf("++++++++++++++++++++++++++++++++++++\n");

    for (int i = 1; i <= totalRooms; i++) {
        printf("Room No. %d\n", i);
        printf("Enter name : ");
        scanf(" %s", name);

        if (name[0] == "x" && name[1] == "\0") {
            printf("------------------------------------\n");
            continue;
        }

        printf("Enter rent per room : ");
        scanf("%f", &rent);

        printf("Enter unit water use : ");
        scanf("%f", &Water_Units);

        printf("Enter unit electric use : ");
        scanf("%f", &Electric_Units);

        TotalPay = rent + (Water_Units * water_Rate) + (Electric_Units * electric_Rate);

        printf("Pay money total for rent room : %.2f\n", TotalPay);
        printf("------------------------------------\n");
    }

    printf("++++++++++++++++++++++++++++++++++++\n");
}