#ifndef PONTO_H
#define PONTO_H

typedef struct {
    int x;
    int y;
} Ponto;

Ponto * alocarVetorPontos(int n);
void liberarVetorPontos(Ponto * v);
void lerPontos(Ponto * v, int n);
void imprimirPontos(Ponto * v, int n);

#endif
