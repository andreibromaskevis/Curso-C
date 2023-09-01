//Criem um programa que recebe o número X e se o número não for  10 ele vai transformá lo em 10  

#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int x;
	
	printf("Digite um número: ");
	scanf("%i", &x);
	
	if (x != 10){
		
		x = 10;
	}
	
	printf("Seu número é: %i", x);

}
