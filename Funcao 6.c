#include <stdio.h>
#include <locale.h>


    void imc(float altura, float peso)
    {
    float alturaDivisor;
    float imcFinal;

    alturaDivisor = altura*altura;
    imcFinal = peso/alturaDivisor;

    printf ("Seu IMC: %.2f", imcFinal);

    }

int main ()
{

    setlocale (LC_ALL, "Portuguese");

    float peso, altura;

    printf ("Digite sua altura:");
    scanf ("%f", &altura);

    printf ("Digite seu peso:");
    scanf ("%f", &peso);

    imc (altura, peso);
}