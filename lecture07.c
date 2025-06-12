//ตัวแปร กับ format code
#include <stdio.h>

void main(){
    //สร้างตัวแปรต้องมี ชนิดข้อมูล
    int aa = 10; //(%d) จำนวนเต็มไม่เกินหลักหมื่น
    float bb = 20.525; //(%f)  ทศนิยมไม่เกิน6หลัก
    double cc = 218.549794565; //(%lf)  ทศนิยมไม่เกิน6หลัก
    char dd = '#'; //ตัวอักษร Charactor คือ ตัวอักษรตัวเดียว อยู่ใน'?'
    char ee[] = "Hello..."; //ข้อความ string คือ ตัวอักษรตั้งแต่ 0 ตัวขึ้นไป อยู่ "?????"
    long ff = 1000000; //(%ld)จำนวนเต็มเกินหลักหมื่น
    
    printf("AA : %d", aa);
    printf("\nBB : %f", bb);
    printf("\nCC : %lf", cc);
    printf("\nDD : %c", dd);
    printf("\nEE : %s", ee);
    printf("\nFF : %ld", ff);
}