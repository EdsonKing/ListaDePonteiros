#include <stdio.h>

int main (void){
    int mat[4], *p, x;

    printf ("[p = mat + 1] -> %d;\n", p = mat + 1); 
    printf ("[p = mat] -> %d;\n", p = mat);     
    //printf ("[p = `mat] -> %d;\n", p = `mat); nao funcionou;
    printf ("[x = (*mat)] -> %d;\n", x = (*mat));             
    return 0;
}