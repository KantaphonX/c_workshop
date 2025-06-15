#include "stdio.h"

void main ()
{
    int a = 10;
    int b;

    b = ++a;
    printf("A = %d\n", a); // A= ???
    printf("B = %d\n", b); // B= ???
    printf("-----------------\n");

    b = a--;
    printf("A = %d\n", a); // A= ???
    printf("B = %d\n", b); // B= ???
    printf("-----------------\n");
}
