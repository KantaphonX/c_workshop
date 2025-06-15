//control statement : if ตรวจสอบครั้งเดียวจริงทำเท็จไม่ทำ
//ตย.พิสูจน์ตัวเลขที่รับจากผู้ใช้งานว่ามากกว่า 0 หรือมไ่ หากมากกว่า0 จริงให้แสดงข้อความ "Positive number"

#include <stdio.h>

void main(){
    int number;

    printf("Input number : ");
    scanf("%d" , &number );

    if(number > 0){
        printf("Positive number");
        

    }
}