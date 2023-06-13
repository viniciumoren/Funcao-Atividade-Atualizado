#include <stdio.h>
#include <locale.h>

void conversor(float numero)
{
    float centimetros;

    centimetros = numero*100;

    printf("%.f cm",centimetros);
}

int main()
{
    float numero;

    printf("Digite um numero:");
    scanf("%f", &numero);

    conversor(numero);

    return 0;
}