//Criem um programa que recebe o número X do usuário e se o número for maior que 5 imprimir ? "X é maior que 5."

#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int x;
	
	printf("Digite um número: ");
	scanf("%i", &x);
	
	if (x > 5 ){
	printf("O número é maior que 5. ");
	}
	if (x == 5){
	printf("O número é igual que 5. ");
	}
	if (x < 5){
	printf("O número é menor que 5. ");
	}
}
