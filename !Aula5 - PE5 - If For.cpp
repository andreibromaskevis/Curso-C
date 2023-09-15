//Escreva um programa que solicita 10 números ao usuário, usando for, e ao final mostre os dois maiores números digitados pelo usuário.

#include <stdio.h>
#include <locale.h>

int main(){
	
setlocale(LC_ALL,"Portuguese");

int i, num, nummaior1 = 0, nummaior2 = 0; 

	printf("Digite 10 números:\n");

for(i = 0; i < 10; i++){
	
	printf("> ");
	scanf("%i", &num);
	
	if (num> nummaior1) {
    	nummaior2 = nummaior1;
    	nummaior1 = num;
    } else if (num > nummaior2 && num != nummaior1) {
    	nummaior2 = num;
        }
    }

    printf("Os dois maiores números são: %i e %i\n", nummaior1, nummaior2);

}
