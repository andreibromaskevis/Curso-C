//Faça um algoritmo que imprima os números de 1 a 100, substituindo os múltiplos de 3 pela palavra "Fizz" e os múltiplos de 5 pela palavra "Buzz". Para os números que são múltiplos de ambos, utilize a palavra "FizzBuzz".
#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL,"Portuguese");
	
    for (int i = 1; i <= 100; i++) {
    	
        if (i % 3 == 0 && i % 5 == 0) {
            printf("> FizzBuzz\n ");
        } else if (i % 3 == 0) {
            printf("> Fizz\n ");
        } else if (i % 5 == 0) {
            printf("> Buzz\n ");
        } else {
            printf("> %d\n ", i);
        }
    }
    printf("\n");
}
