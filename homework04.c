#include <stdio.h>

int main() {
    char name[50];
    char telephone[20];
    int number;
    float rate, total;

    printf("++++++++++++++++++++++++++\n");
    printf("Program Package Tour\n");
    printf("++++++++++++++++++++++++++\n");
    printf("Enter name of head group : ");
    scanf("%s", name);

    printf("Enter telephone of head group : ");
    scanf("%s", telephone);

    printf("Enter number of group : ");
    scanf("%d", &number);
    printf("++++++++++++++++++++++++++\n");
    // คำนวณ
    if (number >= 1 && number <= 2) {
        rate = 300;
    } else if (number >= 3 && number <= 5) {
        rate = 250;
    } else if (number >= 6 && number <= 10) {
        rate = 210;
    } else {
        rate = 150;
    }

    total = rate * number;

    printf("++++++++++++++++++++++++++\n");
    printf("Pay for package tour : %.2f\n", total);
    printf("++++++++++++++++++++++++++\n");
    return 0;
}
