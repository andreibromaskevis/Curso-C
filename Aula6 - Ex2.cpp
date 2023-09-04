//Faça um programa que receba 5 valores, e armazene-os em vetores, 
//após isso mostre os valores na tela de saída, mas se o valor for positivo mostre-o sendo negativo.

#include <stdio.h>
int main(){
int n, x, vetor[5];
for(n = 0; n < 5; n++){
    printf("Digite os valores a serem adicionados no vetor: ");
	scanf("%d", &vetor[n]);
   }
for(n = 0; n < 5; n++){
   	if (vetor[n] > 0){
   	vetor[n] *= -1;	
	}
    printf("%d\n",vetor[n]);
   }
}
