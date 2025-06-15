#include <stdio.h>

void main(){
   int a = 20;
   
   printf("A = %d\n", a);
   ++a;//เครื่องหมาย ++ คือเพิ่มตัวมันเองทีละ 1
   printf("A = %d\n", a);
   a++;
   printf("A = %d\n", a);
   --a;
   printf("A = %d\n", a);
   a--;
   printf("A = %d\n", a);

}