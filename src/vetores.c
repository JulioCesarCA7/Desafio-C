#include <stdio.h>
#include "vetores.h"

void leiaVet(int vet[], int tam) {
    int i;
    printf("\n");
    for(i = 0; i < tam; i++){
        printf("Digite o Valor de [%.2d]: ", i+1);
        scanf("%d", &vet[i]);
    }
}
void escrevaVet(int vet[], int tam) {
    int i;
    for(i = 0; i < tam; i++){
        printf("\nValor de [%.2d]: %.2d", i+1, vet[i]);
    }
    printf("\n");
}
int somaVet(int vet[], int tam) {
    int i, soma = 0;
    for(i = 0; i < tam; i++){
        soma = soma + vet[i];
    }
    return soma;
}
float mediaVet(int vet[], int tam) {
    float total = somaVet(vet, tam);
    float media = total / tam;
    return media;
}
long fatorialVet(int vet[], int tam) {
    int i, pos; long fat = 1;
    printf("\nEscolha Uma das Posições do Vetor de [01] - [%.2d]: ", tam);
    scanf("%d", &pos);

    long numero = vet[pos - 1];
    for(i = 1; i <= numero; i++){
        fat = fat * i;
    }
    return fat;
}
