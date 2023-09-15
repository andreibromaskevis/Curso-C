//Escreva um programa em C que receba duas matrizes (A e B) do mesmo tamanho como entrada e calcule a soma
//dessas matrizes, armazenando o resultado em uma terceira matriz (C). Certifique-se de manipular matrizes de
//tamanho arbitrário e verificar se as dimensões das matrizes de entrada são compatíveis para a soma.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int matriz1[3][3], matriz2[3][3], matrizResultado[3][3];

    int linha, coluna;
    for (linha = 0; linha < 3; linha++) {
        for (coluna = 0; coluna < 3; coluna++) {
            printf("Digite os valores da primeira matriz[%d][%d]: ", linha, coluna);
            scanf("%d", &matriz1[linha][coluna]);
        }
    }

    printf("Matriz 1:\n");
    for (linha = 0; linha < 3; linha++) {
        for (coluna = 0; coluna < 3; coluna++) {
            printf("%d\t", matriz1[linha][coluna]);
        }
        printf("\n");
    }

    for (linha = 0; linha < 3; linha++) {
        for (coluna = 0; coluna < 3; coluna++) {
            printf("Digite os valores da segunda matriz[%d][%d]: ", linha, coluna);
            scanf("%d", &matriz2[linha][coluna]);
        }
    }

    printf("\nMatriz 2:\n");
    for (linha = 0; linha < 3; linha++) {
        for (coluna = 0; coluna < 3; coluna++) {
            printf("%d\t", matriz2[linha][coluna]);
        }
        printf("\n");
    }

    for (linha = 0; linha < 3; linha++) {
        for (coluna = 0; coluna < 3; coluna++) {
            matrizResultado[linha][coluna] = matriz1[linha][coluna] - matriz2[linha][coluna];
        }
    }
    printf("\nResultado da subtração:\n");
    for (linha = 0; linha < 3; linha++) {
        for (coluna = 0; coluna < 3; coluna++) {
            printf("%d\t", matrizResultado[linha][coluna]);
        }
        printf("\n");
    }

    for (linha = 0; linha < 3; linha++) {
        for (coluna = 0; coluna < 3; coluna++) {
            matrizResultado[linha][coluna] = matriz1[linha][coluna] + matriz2[linha][coluna];
        }
    }
    printf("\nResultado da soma:\n");
    for (linha = 0; linha < 3; linha++) {
        for (coluna = 0; coluna < 3; coluna++) {
            printf("%d\t", matrizResultado[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}
