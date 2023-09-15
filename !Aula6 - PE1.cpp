//Verificar Palíndromo
//Crie um programa em C que verifica se um vetor de caracteres (uma string) é um palíndromo ou não. Um palíndromo é uma palavra, 
//frase ou sequência que se lê da mesma forma de trás para frente. 
//O programa deve solicitar ao usuário que insira uma string e, em seguida, determinar se ela é um palíndromo ou não.

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <locale.h>

bool palindromo(char str[]) {
    int esquerda = 0;
    int direita = strlen(str) - 1;

    while (esquerda < direita) {
        if (str[esquerda] != str[direita]) {
            return false;
        }
        esquerda++;
        direita--;
    }
    return true;
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    char entrada[100];

    printf("Digite uma string: ");
    scanf("%s", entrada);

    if (palindromo(entrada)) {
        printf("%s é um palíndromo.\n", entrada);
    } else {
        printf("%s não é um palíndromo.\n", entrada);
    }

    return 0;
}
