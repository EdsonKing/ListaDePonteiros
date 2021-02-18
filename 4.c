#include <stdio.h>

int main (void){
    int i, j;
    int *p, *q;

    //  printf ("[p = &i] -> %d;\n", p = &i); // O programa é executado
    //  printf ("[*q = &j] -> %d;\n", *q = &j); // O programa é executado     
    //  printf ("[p = &*&i] -> %d;\n", p = &*&i); // O programa é executado  
    //  printf ("[i = (*&)j] -> %d;\n", i = (*&)j); // É ilegal         
    //  printf ("[i = *&j] -> %d;\n", i = *&j); // O programa é executado       
    //  printf ("[i = &&j] -> %d;\n", i = &&j); // É ilegal    
    //  printf ("[q = *p] -> %d;\n", q = *p); // O programa é executado   
    //  printf ("[i = (*p)` + *q] -> %d;\n", i = (*p)` + *q); // É ilegal     
    return 0;
}