//Faça uma função que receba um inteiro e mostre na tela se ele for múltiplo de 2.

#include <stdio.h>
#include <locale.h>

int mult(int x){
	
	if (x % 2 == 0){
		printf("O número (%d) é múltiplo de 2. ", x);
		
	}
	else {
		printf("O número (%d) não é múltiplo de 2. ", x);
		
	}
	
	
}
int main(){
	
	int x;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite um número: ");
	scanf("%d", &x);
	
	mult(x);

}



