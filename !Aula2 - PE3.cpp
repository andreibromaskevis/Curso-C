//Faça um algoritmo que leia dois números inteiros e mostre o resultado da multiplicação entre eles, se ambos forem positivos; ou a soma, se pelo menos um deles for negativo.

#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int num1;
	int num2;
	int mult;
	int soma;
	
	printf("Digite o primeiro número: ");
	scanf("%d", &num1);
	
	printf("Digite o segundo número: ");
	scanf("%d", &num2);
	
	if (num1 >= 0 && num2 >= 0){
		
		mult = num1 * num2;
		printf("Resultado da multiplicação: %d", mult);
	}
	else {
	
		soma = num1 + num2;
		printf("Resultado da soma: %d", soma);
}
}
