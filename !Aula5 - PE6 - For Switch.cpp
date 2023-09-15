//Fazer um programa que solicite 2 números e informe:
//a) A soma dos números;
//b) O produto do primeiro número pelo quadrado do segundo;
//c) O quadrado do primeiro número;
//f) O módulo do primeiro número.

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	
	int n1, n2, soma, produto, quadradonum1, quadradonum2, modulonum1, escolha, i;

	setlocale(LC_ALL,"Portuguese");
	
for (i = 0; i < 1; i++){
	
	printf("Digite um número: ");
	scanf("%i", &n1);
	
	printf("Digite outro número: ");
	scanf("%i", &n2);
}
	soma = n1 + n2;
	quadradonum1 = pow(n1, 2);
	quadradonum2 = pow(n2, 2);
	produto = n1 * quadradonum2;
	
	if (n1 < 0){
	modulonum1 = -1 * n1;
	}
	else {
	modulonum1 = n1;	
	}
	
	printf("\nEscolha uma das opções:\nOpção (1): A soma dos números.\nOpção (2): O produto do primeiro número pelo quadrado do segundo.\nOpção (3): O quadrado do primeiro número.\nOpção (4): O módulo do primeiro número.\n");
	printf("Opção: ");
	scanf("%i", &escolha);
	
switch(escolha){
	case 1:
		printf("> A soma dos números é %i.\n", soma);
	break;
	case 2:
		printf("> O produto do primeiro número pelo quadrado do segundo é %i.\n", produto);
	break;
	case 3:
		printf("> O quadrado do primeiro número é %i.\n", quadradonum1);
	break;
	case 4:
		printf("> O módulo do primeiro número é %i.\n", modulonum1);
	break;
	default:
		printf("> Valor inválido!");
	break;
}
}
