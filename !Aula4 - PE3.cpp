//Faça um programa que some os números ímpares contidos em um intervalo definido pelo usuário. O usuário define o valor inicial do intervalo
//e o valor final deste intervalo e o programa deve somar todos os números ímpares contidos neste intervalo. Caso o usuário digite um intervalo 
//inválido(começando por um valor maior que o valor final) deve ser escrito uma mensagem de erro na tela. “intervalo de valores inválido” e o programa termina. Exemplo de tela de saída:

#include <stdio.h>
#include <locale.h>

int main() {
    int valorInicial, valorFinal;
    int i, soma = 0;
    
    setlocale(LC_ALL,"Portuguese");

    printf("Intervalo inicial: ");
    scanf("%i", &valorInicial);

    printf("Intervalo final: ");
    scanf("%i", &valorFinal);


    if (valorInicial > valorFinal) {
        printf("intervalo de valores inválido!");
        return 1; 
    }

    for (int i = valorInicial; i <= valorFinal; i++) {
        if (i % 2 != 0) {
            soma += i;
        }
    }
    printf("A soma dos números ímpares entre esses intervalos é: %i", soma);
}
