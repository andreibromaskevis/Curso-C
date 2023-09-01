//Cria um Algoritmo que verifica se um nu´mero e´ PAR ou IMPAR:

#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	printf("Digite um número: ");
	scanf("%i", &num);
	
	if (num % 2 == 0){
		printf("O número é PAR. ");
	}
	else{
		printf("O número é IMPAR. ");
	}
}
