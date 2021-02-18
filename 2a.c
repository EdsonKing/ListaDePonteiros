#include <stdio.h>

int main (void){
    int i=3, j=4;
    int *p , *q;
    p = &i;
    q = &j;

    *p == &i;
    printf ("p = %d;\n", *p); 
    return 0;
}