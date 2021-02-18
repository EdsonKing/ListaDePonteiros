#include <stdio.h>
#include <stdlib.h>
float *vetortr(float *vet, int x){
	float tep;
	int i,t;
	float *vetort = vet;
	for(i = 0; i < x - 1; i++){
		int min = i;
		for(t = i + 1; t < x; t++){
			if(vet[t] < vet[min]){
				min = t;
			}
		}
		temp = vetort[min];
		vetort[min] = vetort[i];
		vetort[i] = temp;
	}
	return vetort;
}
float *vetor(int x, float* (*g) (float*,int)){
	int i;
	float *vet = (float *)malloc(x * sizeof(float));
	if(vet == NULL){
		printf("Sem memoria");
		exit(1);
	}
	for(i = 0; i < x; i++){
		printf("Insira o valor %i do vetor: ", i + 1);
		scanf("%f", &vet[i]);
	}
	return g(vet,x);
}
int main(){
	int n, i;
	printf("Insira o numero de valores: ");
	scanf("%d", &n);
	float *vetf = vetor(n, vetortr);
	for(i = 0; i < n; i++){
		printf("%f \n", vetf[i]);
	}
	free(vetf);
	return 0;
}
