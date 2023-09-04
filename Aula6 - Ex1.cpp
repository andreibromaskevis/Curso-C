//Faça um programa que receba 3 valores, e armazene-os em vetores, após isso mostre os valores na tela.

#include <stdio.h>
int main(){

int n, vetor[3];

for (n = 0; n < 3; n++){

printf("Digite tres numero: ");
scanf("%i", &vetor[n]);
}
for (n = 0; n < 3; n++){
printf("> %i\n", vetor[n]);
}
}
