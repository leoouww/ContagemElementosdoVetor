#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 10
/* 
	QUESTÃO 3
	
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"");
	int vetor[TAM];
	int i;
	
	for(i = 0; i < TAM; ++i){
		printf("\nDigite o %do valor do vetor de inteiros: ", i+1);
		scanf("%d", &vetor[i]);
	}
	int contador, j;
	for(j = 0; j < TAM; j++){
		contador = 0;
		for(i = 0; i < TAM; i++){
			if(vetor[j] == vetor[i])
				contador++;
		}
		printf("\n%d (%do posição do vetor) aparece %d vez(es)!", vetor[j], j, contador);
	}
	return 0;
}
