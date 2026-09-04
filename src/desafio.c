#include <stdio.h>
#include <math.h>
#include <locale.h>
#include "vetores.h"

int main(){
	setlocale(LC_ALL, "Portuguese");
	int tam;
	printf("Digite o Tamanho do Seu Vetor: ");
	scanf("%d",&tam);
	int vet[tam];

	leiaVet(vet,tam);
	escrevaVet(vet,tam);

	int resultadoS = somaVet(vet,tam);
	printf("\nSoma dos Elementos do Vetor Digitado: %d\n",resultadoS);

	float resultadoM = mediaVet(vet,tam);
	printf("A Media dos Elementos Digitados: %.2f\n",resultadoM);

	long fatorial = fatorialVet(vet,tam);
	printf("Fatorial do Elemento Escolhido: %ld\n",fatorial);

	return 0;
}
