#include <stdio.h>

void mediaResultado(float media)
{

    printf ("Media: %.1f \n", media);

    if (media >= 7)
    {
        printf("Você está aprovado!!");
    }
    else if (media >= 5)
    {
        printf("Você está recuperação!!");
    }
    else
    {
        printf("Você está reprovado!!");
    }


}

int main()
{

    int i;
    float nota[3];
    float soma;
    float media;

    for (i = 0; i < 3; i++)

    {

        printf("Digite a nota %d ª: ", i+1);
        scanf("%f", &nota[i]);

        soma = soma + nota[i];
        media = (soma / (i + 1));
    }

    mediaResultado(media);
}