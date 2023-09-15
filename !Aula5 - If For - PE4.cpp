//Crie um programa que imprima uma tabela de conversão de graus Fahrenheit para Celsius, conforme um intervalo definido pelo usuário. 
//O algoritmo em C deve solicitar ao usuário o limite superior do intervalo e um valor de incremento.
//Para a realização dos cálculos, considere a seguinte fórmula:                   
//C = (F - 32) * (5/9)
//Considere sempre o valor do limite inferior como 10.

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int limite;
    float C, inc;

    printf("Digite um limite de graus Fahrenheit para Celsius (maior ou igual a 10): ");
    scanf("%i", &limite);

    if (limite < 10) {
        printf("Valor inválido!\n");
        return 0;
    }

    printf("Digite um valor para incrementar: ");
    scanf("%f", &inc); 

    for (float i = 10; i <= limite; i += inc) { 
    
        C = (i - 32) * 5 / 9;
        printf("> %.2f°C\n", C);
    }
}
