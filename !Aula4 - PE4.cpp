//Faça um algoritmo que converta uma velocidade expressa em km/h para m/s e vice versa. 
//Você deve criar um menu com as duas opções de conversão e com uma opção para finalizar o programa. 
//O usuário poderá fazer quantas conversões desejar, sendo que o programa só será finalizado quando a opção de finalizar for escolhida.

#include <stdio.h>
#include <locale.h>

int main() {
	
    int escolha;
    float velocidade;
    
    setlocale(LC_ALL,"Portuguese");

    do {
        printf("Escolha uma opcao:\n");
        printf("1.km/h para m/s\n");
        printf("2.m/s para km/h\n");
        printf("3. Finalizar\n");
        printf("Opcao: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                printf("Digite a velocidade em km/h: ");
                scanf("%f", &velocidade);
                printf("%.2f km/h equivale a %.2f m/s\n", velocidade, velocidade / 3.6);
                break;
            case 2:
                printf("Digite a velocidade em m/s: ");
                scanf("%f", &velocidade);
                printf("%.2f m/s equivale a %.2f km/h\n", velocidade, velocidade * 3.6);
                break;
            case 3:
                printf("Programa finalizado.\n");
                break;
            default:
                printf("Inválido. Tente novamente.\n");
        }
    } while (escolha != 3);

    return 0;
}
