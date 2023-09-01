//Receba um valor em Real (R$) (float) e mostre a conversão para Dólar(5 R$) e Euro(5.2 R$).

#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	float num;
	float dolar;
	float euro;
		
	printf("Digite um valor em real: R$");
	scanf("%f", &num);
	
	dolar = num / 5;
	euro = num / 5.2;
	
	printf("Valor em dólar: %.2f\nValor em euro: %.2f", dolar, euro);
	
}
