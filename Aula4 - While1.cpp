//Criar um programa que necessita de senha.

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int tentativa;
    
    printf("Digite uma senha: ");
    scanf("%i", &tentativa);
    
    while(tentativa != 2004){
    
    printf("Senha errada!\n");
    printf("Digite novamente: ");
    scanf("%i", &tentativa);
}
printf("Senha incorreta!");
}
