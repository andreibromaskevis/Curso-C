//Faça um programa que receba dois valores float: um de altura e um de peso, para calcular o IMC. Por fim mostre o resultado. 

#include <stdio.h>

int main(){
	
	float altura, peso, imc, elev;

	
	printf("Altura: ");
	scanf("%f", &altura);
	
	printf("Peso: ");
	scanf("%f", &peso);
	
	elev = altura*altura;
	imc = peso/elev;
	
	printf("IMC: %.2f", imc);
	
}

		//ou//

#include <stdio.h>
#include <math.h>

int main(){
	
	float altura, peso, imc, elev;

	
	printf("Altura: ");
	scanf("%f", &altura);
	
	printf("Peso: ");
	scanf("%f", &peso);
	
	imc = peso/pow(altura, 2);
	
	printf("IMC: %.2f", imc);
	
}

