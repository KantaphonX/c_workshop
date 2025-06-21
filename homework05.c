#include <stdio.h>
void main() {
    int number, no;
    char id[50];
    char name[50];
    float gap;
    

    printf("--------------------------\n");
    printf("Program Study Result\n");
    printf("--------------------------\n");
   
    printf("Enter number of student : ");
    scanf("%d", &number);
    printf("--------------------------\n");
    
    for (no = 1; no <= number; no++){
        printf("\nStudent No. %d\n",no);
    
        printf("Enter student id : ");
        scanf("%s", id);
        
        printf("Enter student name :");
        scanf("%s", name);
    
        printf("Enter student GPA :");
        scanf("%f", &gap);

    if (gap >= 2.00) {
        printf("Study result is : Pass");
    
    } else { 
        printf("Study result is : Not pass");
       
    }
}
}
