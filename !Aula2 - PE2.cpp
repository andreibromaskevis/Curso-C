//O professor aplicou a avaliação em sua turma e deseja mostrar se o aluno foi aprovado 
//(nota maior ou igual a 5) ou reprovado(nota menor que 5). Desenvolva o programa que leia a nota do 
//aluno e gere a tela de saída com as informações solicitadas.

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	float nota;
	
	printf("Nota: ");
	scanf("%f", &nota);

	if (nota >= 5 && nota <= 10)
	printf("Aluno aprovado!\n");

	if (nota >= 0 && nota < 5 )
	printf("Aluno reprovado!\n");

}


