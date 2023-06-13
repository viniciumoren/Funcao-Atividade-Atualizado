#include <stdio.h>
#include <locale.h>

void maiorNumero(int numeroUm, int numeroDois)
{
    int maior;
    if (numeroUm > numeroDois)
    {
        maior = numeroUm;
    }
    else
    {
        maior = numeroDois;
    }
    printf("Maior número: %d \n", maior);
}

void menorNumero(int numeroUm, int numeroDois)
{
    int menor;
    if (numeroUm < numeroDois)
    {
        menor = numeroUm;
    }
    else
    {
        menor = numeroDois;
    }
    printf("Menor número: %d \n", menor);
}

int main()
{

    setlocale (LC_ALL, "portuguese");

    int numeroUm, numeroDois;

    printf("Digite o primeiro numero:");
    scanf("%d", &numeroUm);

    printf("Digite o segundo numero:");
    scanf("%d", &numeroDois);

    maiorNumero(numeroUm, numeroDois);
    menorNumero(numeroUm, numeroDois);

    return 0;
}
