#include <stdio.h>
#include <stdlib.h>
#include "ponto.h"

Ponto * alocarVetorPontos(int n) {
    Ponto * v = (Ponto *) malloc(n * sizeof(Ponto));
    if (v == NULL) {
        printf("Erro: falha na alocação de memória.\n");
        exit(1);
    }
    return v;
}

void liberarVetorPontos(Ponto * v) {
    free(v);
}

void lerPontos(Ponto * v, int n) {
    for (int i = 0; i < n; i++) {
        printf("Ponto %d:\n", i + 1);
        printf("  x = ");
        scanf("%d", &v[i].x);
        printf("  y = ");
        scanf("%d", &v[i].y);
    }
}

void imprimirPontos(Ponto * v, int n) {
    for (int i = 0; i < n; i++) {
        printf("Ponto %d: (%d, %d)\n", i + 1, v[i].x, v[i].y);
    }
}
