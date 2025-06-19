//Control Statement : switch-case พิสูจน์/ตรวจสอบหลายครั้ง แต่เป็นการพิสูจน์ว่าเท่ากันหรือไม่เท่ากัน และพิสูจน์เฉพาะตัวเลขและตัวอักษร

//ตย. โปรแกรมตรวจสอบสายรถเมล์ จากการป้อนข้อมูลสายรถเมล์จากผู้ใช้งานและแสดงผลออกมา
// กรณีผุ้มใช้งานป้อนสาย 3 แสดงข้อความ Go to Sanamlung
// กรณีผุ้มใช้งานป้อนสาย 123 แสดงข้อความ Go to Pinkloa
// กรณีผุ้มใช้งานป้อนสาย 84 แสดงข้อความ Go to Wat rai King
// กรณีผุ้มใช้งานป้อนสาย 81 แสดงข้อความ Go to Oam Noi
// กรณีผุ้มใช้งานป้อนสายสานอื่นๆ แสดงข้อความ Don't have data of BUS Number
#include <stdio.h>

int main(){

    int busNo;
    printf("Input bus number : ");
    scanf("%d" , &busNo );
    printf("-----------------\n");

    switch( busNo ){
        case 3 : printf(" Go to Sanamlung"); break;        
        case 123 : printf(" Go to Pinkloa"); break;        
        case 84 : printf(" Go to Wat Rai King"); break;        
        case 81 : printf(" Go to Oam Noi"); break;        
        default : printf(" Don' have data of BUS Number");       


    }

    return 0;
}