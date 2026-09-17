#include <stdio.h>
#include <stdlib.h>
#include "ponto.h"

int main() {
    int n;
    Ponto * vetorPontos;
    int opcao;

    printf("Quantos pontos deseja armazenar? ");
    scanf("%d", &n);

    vetorPontos = alocarVetorPontos(n);
    lerPontos(vetorPontos, n);

    do {
        printf("\nMenu:\n");
        printf("1 - Imprimir pontos\n");
        printf("0 - Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            imprimirPontos(vetorPontos, n);
        }

    } while (opcao != 0);

    liberarVetorPontos(vetorPontos);
    vetorPontos = NULL;

    return 0;
}
