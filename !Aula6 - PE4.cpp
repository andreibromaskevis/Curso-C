//Crie um programa em C que solicite ao usuário duas matrizes, uma matriz A de dimensões m x n e outra matriz B de dimensões n x p. 
//Em seguida, o programa deve calcular o produto das duas matrizes e armazenar o resultado em uma terceira matriz C de dimensões m x p
//Verifique se o número de colunas em A é igual ao número de linhas em B para que a multiplicação seja possível. Printe a matriz resultante.

#include <stdio.h>
#include <locale.h>

//Nessa precisei daquela ajudinha do chat =(
int main() {
	
	setlocale(LC_ALL,"Portuguese");
	
    int m, n, p;

    printf("Digite o número de linhas da matriz A: ");
    scanf("%d", &m);

    printf("Digite o número de colunas da matriz A (e linhas da matriz B): ");
    scanf("%d", &n);

    printf("Digite o número de colunas da matriz B: ");
    scanf("%d", &p);

    int matrizA[m][n], matrizB[n][p], matrizC[m][p];

    printf("Digite os elementos da matriz A (%d x %d):\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Elemento A[%d][%d]: ", i, j);
            scanf("%d", &matrizA[i][j]);
        }
    }

    printf("Digite os elementos da matriz B (%d x %d):\n", n, p);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            printf("Elemento B[%d][%d]: ", i, j);
            scanf("%d", &matrizB[i][j]);
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            matrizC[i][j] = 0;
            for (int k = 0; k < n; k++) {
                matrizC[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }

    printf("Matriz resultante C (%d x %d):\n", m, p);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            printf("%d\t", matrizC[i][j]);
        }
        printf("\n");
    }

    return 0;
}
