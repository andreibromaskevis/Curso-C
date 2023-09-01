//Crie um programa que RECEBA um valor inteiro do USUÁRIO e exiba 
//“Hello World” com as aspas duplas(“ ”) na quantidade de vezes que o usuário DIGITOU, utilizando a instrução 'goto'.

#include <stdio.h>
#include <locale.h>

int main() {

setlocale(LC_ALL, "Portuguese");

	int valor;
	int count = 1;
	
	printf("Quantidade de \"Hello World\": ");
	scanf("%i", &valor);

loop:
	if (valor >= count){
		printf("\"Hello World\"\n");
		count++;
		goto loop;
	}
}	



