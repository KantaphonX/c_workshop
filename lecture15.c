//control statement : if -else พิสูจน์/ตรวจสอบครั้งเดียวจริงทำอย่าง เท็จทำอีกอย่าง
//ตย.พิสูจน์ตัวเลขที่รับจากผู้ใช้งานว่ามากกว่า 0 หรือมไ่ หากมากกว่า0 จริงให้แสดงข้อความ "Positive number"หากตั้งแต่ 0 ลงมาให้แสดงข้อความ"Negative number"

#include <stdio.h>

void main() {
    int number;

    printf("Input number: ");
    scanf("%d", &number);

    if (number >= 0) {
        printf("Positive number");
    } else {
        printf("Negative number");
    }
}