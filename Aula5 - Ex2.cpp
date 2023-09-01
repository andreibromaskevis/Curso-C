//Escreva um algoritmo que solicita ao usuário um valor N inteiro positivo e imprime na tela do computador todos os número inteiros de 0 até N digitado. (Usando for)

#include <stdio.h>
#include <locale.h>

int main() {

	setlocale(LC_ALL,"Portuguese");

	int num;
	int i;
	
	printf("Digite um número: ");
	scanf("%i", &num);
	
	for (i = 0; i <= num; i++){
		
	printf("> %i\n", i);
	}
}
