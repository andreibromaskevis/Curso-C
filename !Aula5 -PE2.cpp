//Utilizando for, faça um programa que receba 10 números e conte quantos deles estão no intervalo [10,20] e quantos deles estão fora do intervalo, escrevendo estas informações.

#include <stdio.h>
#include <locale.h>

int main(){
	
	int num, intervaloD = 0, intervaloF = 0, i;

	setlocale(LC_ALL,"Portuguese");

for (i = 1; i <= 10; i++){
	
	printf("Digite 10 números: ");
	scanf("%i", &num);
	
	if (num >= 10 && num <= 20){
		
		intervaloD++;
		printf("Intervalo dentro!\n");
	}
	else{
		
		intervaloF++;
		printf("Intervalo fora!\n");
	}
}
	printf("===================\n");
	printf("\\ Intervalos dentro \\ = %i\n", intervaloD);
	printf(" ===================\n\n");
	
	printf("=================\n");
	printf("\\ Intervalos fora \\ = %i\n", intervaloF);
	printf(" =================\n");

}
