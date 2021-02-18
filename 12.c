//Ponteiros para Funcoes sao ponteiros que "herdam" os argumentos de uma funçao, podendo assim, invocar (a partir desse ponteiro) a funcao.
#include <stdio.h>

MaiorNumero(int *x, int *y){
  int tmp; 
  if(*x > *y){
    tmp = *x; *x = *y; *y = tmp;
  }
  else{
  }
}
int main(){
  int (*p)(); // (*p)() e o meu ponteiro para a funcao
  int x=6, y=3;
  p = MaiorNumero; //atribuindo ao ponteiro, a miha funcao
  p(&x , &y); // "invocando" minha funcao a partir do ponteiro
  printf("%d < %d\n",x, y);
  return 0;
}