/*Faça um programa que leia a matrícula e a média de 100 alunos. Ordene da maior
para a menor nota e imprima uma relação contendo todas as matrículas e médias. */
#include <stdio.h>

#define tam 5

int main()
{
    int matricula[tam];
    int i, j, auxMat=0;
    float media[tam], auxMedia=0;

    printf("Informe as matriculas e as medias de cada aluno\n");
    for(i = 0; i < tam; i++)
    {
        printf("Aluno %d: \n", i+1);
        scanf("%d %f", &matricula[i], &media[i]);
    }

    for(i = 0; i < tam-1; i++)
    {
        for(j = i+1; j < tam; j++)
        {
            if(media[i] < media[j])
            {
                auxMedia = media[i];
                media[i] = media[j];
                media[j] = auxMedia;

                auxMat = matricula[i];
                matricula[i] = matricula[j];
                matricula[j] = auxMat;
            }
        }
    }

    for(i = 0; i < tam; i++)
    {
        printf("Matricula= %d \n", matricula[i]);
        printf("Media= %.2f \n", media[i]);
    }
    return 0;
}
