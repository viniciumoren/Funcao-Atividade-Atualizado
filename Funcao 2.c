#include <stdio.h>
#include <locale.h>

void tabuada(int numero)
{
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("%d x %d = %d \n", numero, i + 1, (numero * (i + 1)));
    }
}

int main()
{
    setlocale(LC_ALL, "portuguese");

    int numero;
    printf("Para achar a tabuada digite um numero:");
    scanf("%d", &numero);

    system("cls");

    tabuada(numero);

    return 0;
}