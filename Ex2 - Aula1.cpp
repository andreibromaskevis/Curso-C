//Receba (input) o valor de um salário e mostre o quanto deve ser depositado de FGTS (8% do valor salário) para este salário informado.

#include <stdio.h>

int main(){
	
	float salario;
	float fgts;
	
	printf("Salario: R$");
	scanf("%f", &salario);
	
	fgts = salario*0.08;
	
	printf("FGTS: R$%.2f", fgts);
	
	
	
}


