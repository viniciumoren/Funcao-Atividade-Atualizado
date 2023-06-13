#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>


void mostraSituacao (char disciplinas, [][250], float media[])
{
    int i;
    for ( i = 0; i < 3; i++)
    {
        if (media[i] >= 7)
        {
            printf ("Situação: Aprovado. \n\n")
        }else if (/* condition */)
        {
            /* code */
        }
        
        
    }
    
}


int main()
{

    int i,j ;
    char disciplina [3][250];
    float nota[3][2];
    float media [3];

    for (i = 0; i < 3; i++)
    {
        printf("Digite nome da disciplina:");
        scanf("%s", &disciplina[i]);

        for (j = 0; j < 2; j++)
        {
            do
            {

                printf("Digite a :");
                scanf("%f", &nota[i, j]);

            } while (nota[i, j] < 0 || nota[i, j] > 10);
        }
    }
}