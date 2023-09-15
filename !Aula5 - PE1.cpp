//Leia várias idades e calcule a média entre as idades (usar uma variável para idade)

#include <stdio.h>
#include <locale.h>

int main(){
	
	int quantidade, idade, soma, media, i;

	setlocale(LC_ALL,"Portuguese");

	printf("Digite a quantidade de idades: ");
	scanf("%i", &quantidade);
	
for (i = 1; i <= quantidade; i++){
	
	printf("Digite as idades: ");
	scanf("%i", &idade);
	
	if (idade >= 0){
		
		soma += idade;
		media = soma/quantidade;
	}
	else{
		
		printf("Valor inválido!");
	}
}
	printf("=======\n");
	printf("\\ Média \\ = %i\n", media);
	printf(" ========\n");

}
