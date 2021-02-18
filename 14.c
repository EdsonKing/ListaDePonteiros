#include <stdio.h>
#include <stdlib.h>
 
int crescente(const void *a, const void *b) {
  if (*(float*)a > *(float*)b) {
      return 1;
   } 
  else if (*(float*)a < *(float*)b) {
      return -1;
   }
  else {
      return 0; //CASO SEJAM IGUAIS 
   }
}
 
int main () {
  int n;
  printf("Indique o numero de valores: ");
	scanf("%d", &n);
  float vet[n]; 
	for(int j = 0; j < n; j++){
		printf("Indique o valor %i do vetor: ", j+1);
		scanf("%f", &vet[j]);
	}   // DECLARACAO DOS VALORES
 
  qsort(vet, n, sizeof(float), crescente); // CHAMANDO MINHA FUNCAO UTILIZANDO O QSORT
 
  for(int i = 0 ; i < n; i++ ) {
    printf("%f ", vet[i]);
  } // IMPRIMINDO NA TELA OS VALORES JA ORDENADOS
 
   return(0);
}
