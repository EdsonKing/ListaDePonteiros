#include <stdio.h>

int main (void){
    int i=3, j=4;
    int *p , *q;
    p = &i;
    q = &j;

    int resp;
    resp = **&p ;
    printf ("resposta = %d;\n", resp); 
    return 0;
}