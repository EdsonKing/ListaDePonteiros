/* Sendo Char -> x + 1 = 4093, x + 2 = 4094, x + 3 = 4095 
   Sendo Int -> x + 1 = 4094, x + 2 = 4096, x + 3 = 4098  
   Sendo Float -> x + 1 = 4096, x + 2 = 409A, x + 3 = 409E
   Sendo Double -> x + 1 = 409A, x + 2 = 40A2, x + 3 = 40AA  
*/
#include<stdio.h>

int main(){  
char x[4]={1,2,3,4}, *a;
a = &x;
int y[4]={1,2,3,4}, *b;
b = &y;
float z[4]={1.1,1.2,1.4,3.4}, *c;
c = &z;
double w[4]={1,2,3,4}, *d;
d = &w;
for(int i=1;i<4;i++){
printf("Se for char -> %x | Se for int -> %x | Se for float -> %x | Se for double -> %x \n", a+i , b+i , c+i , d+i );
}
return 0;
}