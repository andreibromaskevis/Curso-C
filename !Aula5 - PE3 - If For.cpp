//Dado um número n inteiro e positivo, dizemos que n é perfeito se n for igual à soma de seus divisores positivos diferentes de n. 
//Construa um programa em C que verifica se um dado número é perfeito. Exemplo: 6 é perfeito, pois 1 + 2 + 3 = 6;

#include <stdio.h>
#include <locale.h>

int main(){
	
	int n, soma, i;

	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite um número: ");
	scanf("%i", &n);

for (i = 1; i < n; i++){
	
	if (n % i == 0){
		soma += i;
}
}
		if (soma == n){
		
			printf("%i é um número perfeito. ", n);	
		}
		if (soma != n){
		
			printf("%i não é um número perfeito. ", n);
		}	
	}
