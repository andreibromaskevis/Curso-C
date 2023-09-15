//Crie um programa que exiba os números divisíveis por um até cem, utilizando a instrução 'goto'

#include <stdio.h>
#include <locale.h>

int main() {

setlocale(LC_ALL, "Portuguese");

//Para alterar a divisão do loop, é necessário mudar os valores de (num) e (div), 
    int num = 3;
    int div = 3;

loop:
    if (num % div == 0) {
        printf("%d --> é divisível por ((%d))\n ", num, div);
    }

    num = num +3;

    if (num < 101) {
        goto loop;
    }

    return 0;
}	

