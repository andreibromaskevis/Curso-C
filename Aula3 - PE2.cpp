//Faça uma calculadora que receba números inteiros e posteriormente a operação a ser feita com esses número e então retorne o resultado.

#include <stdio.h>
#include <locale.h>

int calc(int num1, int num2, char escolha){
	
	int x;
	
	if (escolha == '+'){
		x = num1 + num2;
	}
	else if (escolha == '-'){
		x = num1 - num2;
	}
	else if (escolha == '*'){
		x = num1 * num2;
	}
	else if (escolha == '/'){
		x = num1 / num2;
	}

}
int main(){
	
	int calcx;
	int num1;
	int num2;
	int escolha;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("Primeiro número: ");
	scanf("%d", &num1);
	
	printf("Segundo número: ");
	scanf("%d", &num2);
	
	printf("Digite uma das opções--> (+ - * /): ");
	scanf(" %c", &escolha);
	
	calcx = calc(num1,num2,escolha);
	
	printf("resultado: %d", calcx);
}


