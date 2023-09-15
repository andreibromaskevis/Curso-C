//Escreva um programa em C que calcula o produto escalar entre dois vetores de números inteiros de mesmo tamanho.
//O programa deve pedir ao usuário que insira os elementos dos dois vetores e, em seguida, calcular o produto escalar desses vetores.
//O produto escalar é dado pela soma dos produtos dos elementos correspondentes dos dois vetores.

#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL,"Portuguese");
	
    int tamanho;

    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &tamanho);

    if (tamanho <= 0) {
        printf("O tamanho dos vetores deve ser maior que zero.\n");
        return 1;
    }

    int vetor1[tamanho], vetor2[tamanho];

    printf("Digite os elementos do primeiro vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor1[i]);
    }

    printf("Digite os elementos do segundo vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor2[i]);
    }

    int produto_escalar = 0;
    for (int i = 0; i < tamanho; i++) {
        produto_escalar += vetor1[i] * vetor2[i];
    }

    printf("O produto escalar dos vetores é: %d\n", produto_escalar);

    return 0;
}
