//Faça um programa para imprimir uma contagem de 0 até 100 de 10 em em 10, utilizando For. Um número por linha.

#include <stdio.h>
#include <locale.h>

int main() {
	
int i;

setlocale(LC_ALL,"Portuguese");

printf("Numeração de 10 em 10:\n");

for (i = 0; i < 101; i += 10){
	printf("%i\n", i);
	}	
}
