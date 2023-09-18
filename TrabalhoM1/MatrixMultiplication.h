#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 3


void printMatrizA(int matriz[TAMANHO][TAMANHO]) {

    int i, j;

    // Imprime os valores dentro da matriz
    for (i = 0; i < TAMANHO; i++) {
        for (j = 0; j < TAMANHO; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void printMatrizB(int matrizB[TAMANHO][TAMANHO]) {

    int i, j;
    // Imprime os valores dentro da matriz
    for (i = 0; i < TAMANHO; i++) {
        for (j = 0; j < TAMANHO; j++) {
            printf("%d ", matrizB[i][j]);
        }

        printf("\n");
    }
}
void multiplicacaoMatriz(int matriz1[TAMANHO][TAMANHO], int matriz2[TAMANHO][TAMANHO]) {

    int resultado[TAMANHO][TAMANHO];

    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            resultado[i][j] = 0;
            for (int k = 0; k < TAMANHO; k++) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
            printf("  %d", resultado[i][j]);
        }
        printf("\n");
    }
}