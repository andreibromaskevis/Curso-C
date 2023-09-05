//Achar o maior e o menor nu´mero de uma se´rie de nu´meros inteiros positivos fornecidos pelo usua´rio via teclado. 
//O programa deve solicitar valores ate´ que o usua´rio entre com -1. (Usando while e condicionais)
//NUMERO MENOR NAO TA FUNCIONANDO!
#include <stdio.h>
#include <locale.h>

int main() {
	
    setlocale(LC_ALL, "Portuguese");

    int num, maior = 0, menor = 0;
    
    while(num != -1){
    	
    	printf("Digite um número positivo (-1 para parar): ");
    	scanf("%i", &num);
    	
    	if (num != -1){
    	
    	if (num > maior){
    		maior = num;
		}	
    	else if (num < menor){
    		menor = num;
		}			
    }
	}
    printf("Maior número: %i\nMenor número: %i", maior, menor);
   
}
