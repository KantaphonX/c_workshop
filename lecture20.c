// คำสั่ง break และ continue ใน Loop
// break ใน Loop ทำงานเมื่อใด ออกจาก Loop ทัน
// continue ใน Loop ทำงานเมื่อใด ถือว่าจบรอบนั้น ให้ไปรอบจ่อไปทันทีโดยที่ไม่่สนใจคำสั่งใดๆ ใน Loop

#include <stdio.h>

void main(){
    int i;

    for (i = 1 ; i <= 10 ; i = 1 + 1){
        printf("Hello....\n");
        if(i == 5){
            continue;
    }
        printf("Hi....\n");
        
    }
}