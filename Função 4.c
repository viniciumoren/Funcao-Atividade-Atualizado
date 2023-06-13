#include <stdio.h>
#include <locale.h>


void precofinal (float valorDigitado)
{
    float valorComDesconto ;

    if (valorDigitado <= 100)
    {
        valorComDesconto = valorDigitado*0.90;

    }
    else
    {
        valorComDesconto = valorDigitado*0.80;

    }
    printf ("Preço final: %.f", valorComDesconto);
    
    
}

int main ()
{

    float preco;

    printf ("Digite o preço:");
    scanf ("%f", &preco);

    precofinal (preco);

    return 0;

}