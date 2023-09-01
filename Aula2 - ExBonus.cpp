//Exercício para treinar "switch case", dando uma reação para cada nota.
#include <stdio.h>
#include <locale.h>

int main(){

	setlocale(LC_ALL,"Portuguese");
	
	int nota;
	
	printf("Dê uma nota de 1 a 5: ");
	scanf("%i", &nota);

switch(nota){
	
	case 1:
	printf("Muito bom! ");
	break;
	
	case 2:
	printf("Bom. ");
	break;
	
	case 3:
	printf("Aceitavel. ");
	break;
	
	case 4:
	printf("Abaixo da média ");
	break;
	
	case 5:
	printf("Péssimo! ");
	break;
		
	default:
	printf("Valor inválido! ");
	break
	
	}
}



