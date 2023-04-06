/*Faça um programa que leia um vetor vet de 10 elementos e obtenha um vetor w
cujos componentes são os fatoriais dos respectivos componentes de vet.*/

#include <stdio.h>

int main()
{
    int vet[10], w[10], i, j, aux;

    printf("Preencha o vetor: \n");
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &vet[i]);
    }
    for(i = 0; i < 10; i++) // calculando o fatorial
    {
        aux = 1;
        if(vet[i] == 1)
        {
            w[i] = 1;
        }
        else
        {
            for(j=1; j<vet[i]; j++)
            {
                aux*= j+1;
            }
            w[i] = aux;
        }
    }
    for(i = 0; i < 10; i++)
    {


    printf("Numero %d seu fatorial %d \n", vet[i], w[i]);
    }
    return 0;
}
