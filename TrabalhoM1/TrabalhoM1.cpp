#include "MatrixMultiplication.h"
#include "BubbleSort.h"

int main() {

    int matrizA[TAMANHO][TAMANHO];
    int matrizB[TAMANHO][TAMANHO];

    int resultado[TAMANHO][TAMANHO];

    srand(time(NULL));
    for (int linha = 0; linha < TAMANHO; linha++) {
        for (int coluna = 0; coluna < TAMANHO; coluna++) {
            matrizA[linha][coluna] = rand() % 10;
            matrizB[linha][coluna] = rand() % 10;
        }
    }

    printf("------------ MATRIZ GERADA A --------------\n\n");
    printf("------------ MATRIZ A--------------\n");
    printMatrizA(matrizA);

    printf("------------ MATRIZ GERADA  --------------\n\n");
    printf("------------ MATRIZ B--------------\n");
    printMatrizB(matrizB);


    printf("------------ MATRIZ RESULTANTE-------------- \n");
    multiplicacaoMatriz(matrizA, matrizB);


    int vetor[CAPACIDADE];

    printf("\nVETOR GERADO\n");
    for (int i = 0; i < CAPACIDADE; i++) {
        vetor[i] = rand() % 600;
        printf(" %d", vetor[i]);
    }
    printf("\n");

    
    printf("\nVETOR ORDENADO\n");
    bubbleSort(vetor);
    for (int i = 0; i < CAPACIDADE; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");


    


}
