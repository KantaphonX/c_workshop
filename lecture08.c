//output statement คือ คำสั่งที่ใช้ในการแสดงผลข้อมูลออกมา
//print() -> stdio.h แสดงข้อความ String ใช้ ""
//puts() -> stdio.h แสดงข้อความ string ใช้ ""
//putchar() -> stdio.h แสดงตัวอักษรตัวเดียว แสดง character ใช้ ''

#include <stdio.h>

void main(){
    int score1 = 50, score2 = 70; 
    char fname[] = "Sombat";
    char flag = 'Y';

    printf("ABC....XYZ 100+200\n\n %d", 555);
    puts("ABC....XYZ 100+200\n\n");
    printf("ABC....XYZ");
    printf("\n\nValue = %d",100);
    printf("\n\nHello...%s","Sombat");
    putchar('X');
    puts("Hello....");
    printf("\n----------------------------\n");
    printf("score1 = %d\n", score1);
    printf("score2 = %d\n", score2);
    printf("First name = %s\n", fname);
    puts(fname);
    putchar(flag);
    printf("Flag is %c\n", flag);
}