//Escreva um algoritmo que solicita ao usua´rio N notas, calcula e imprime na tela do computador a me´dia do aluno. 
//O programa deve continuar solicitando notas ate´ que o usua´rio entre com -1. (Usando while)

#include <stdio.h>
#include <locale.h>

int main() {
	
    setlocale(LC_ALL, "Portuguese");

    float nota, soma, media, i;
    
    printf("Digite uma nota(-1 para parar): ");
    scanf("%f", &nota);
    
    while (nota != -1){
    	
    i++;
    soma += nota;
    media = soma / i;
    
    printf("Digite outra nota(-1 para parar): ");
    scanf("%f", &nota);
	}
    printf("Media das notas: %.2f", media);
}
