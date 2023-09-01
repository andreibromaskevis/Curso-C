//Criem um programa que recebe o número X e imprime se o número é maior ou menor que dois.

#include <stdio.h>
#include <locale.h>

int main(){
	
	float num;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite um número: ");
	scanf("%f", &num);
	
	if (num > 2){
		printf("O número é maior que 2. ");
	}
	if (num < 2){
		printf("O número é menor que 2. ");
	}
	if (num == 2){
		printf("O número é igual a 2. ");
	}
}





