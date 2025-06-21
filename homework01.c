#include <stdio.h>

void main(){
    char loan[100];
    float loan_amount, benefit;

//รับชื่อผู้กู้
    printf("--------------------------\n");
    printf("Program Benefit of loan\n");
    printf("--------------------------\n");
    printf("Enter name of loan : ");
    scanf("%s" , &loan);

//รับจำนวนเงิน
    printf("Enter money of loan : ");
    scanf("%f" , &loan_amount);
    printf("--------------------------\n");
//แสดงจำนวนเงินกู้
    if (loan >= 1000)
        benefit = loan_amount * 0.025;
    else
        benefit = loan_amount * 0.055;

    printf("----------------------------------------\n");
    printf("Benefit of loan is : %.2f\n", benefit);
    printf("----------------------------------------\n");

}
