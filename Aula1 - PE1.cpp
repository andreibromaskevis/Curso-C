//Receba um valor em Real (R$) (float) e mostre a conversão para Dólar(5 R$) e Euro(5.2 R$).

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    float real;
    float dolar = 5.0;
    float euro = 5.2;

    printf("Digite um valor em real: R$");
    scanf("%f", &real);

    float real_dolar = real / dolar;
    float real_euro = real / euro;

    printf("Valor em dólar: %.2f\n", real_dolar);
    printf("Valor em euro: %.2f\n", real_euro);

    return 0;

}


