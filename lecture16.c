//Control Statement : if-else-if พิสูจน์/ตรวจสอบหลายครั้ง โดยไล่พิสูจน์ไปทีละ if

//ตย. โปรแกรมคิดเกรดจากคะแนนที่รับจากผู้ใช้ 80 ขึ้นไป A, 70-79 B, 60-69 C, 50-59 D, ต่ำกว่า 50 F

#include <stdio.h>

void main() {
    int score;

    printf("Input score: ");
    scanf("%d", &score);

    if (score >= 80) {
        printf("Grade A");
    } else if (score >= 70) {
        printf("Grade B");
    } else if (score >= 60) {
        printf("Grade C");
    } else if (score >= 50) {
        printf("Grade D");
    } else { // else สุดท้ายสามารถมี if ได้
        printf("Grade F");
        printf("T-T");
    }
}