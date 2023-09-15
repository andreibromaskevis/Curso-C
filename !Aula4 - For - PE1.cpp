//O professor aplicou a avaliação em sua turma e deseja selecionar a maior nota e
//sua respectiva frequência, ou seja, a quantidade de alunos que conseguiu a maio nota. 
//Desenvolva o programa que leia a nota dos alunos e gere a tela de saída com as informações solicitadas.

#include <stdio.h>
#include <locale.h>

int main() {
	
    int alunos, i, frequencia;
    float nota, notamaior = 0;
    
    setlocale(LC_ALL,"Portuguese");
    
    printf("Digite a quantidade de alunos: ");
    scanf("%i", &alunos);
    
    for (i = 1; i <= alunos; i++) {
        float nota;
        printf("Digite a nota do aluno %i: ", i);
        scanf("%f", &nota);
        
        if (nota > notamaior) {
            notamaior = nota;

        } else if (nota == notamaior) {
            frequencia++;
        }
    }

    printf("A nota maior é: %.1f\n", notamaior);
    printf("A frequência da nota maior é: %i\n", frequencia);
  
}
