/*. Faça um programa em C que permita entrar com dados para um vetor VET do tipo
inteiro com 20 posições, em que podem existir vários elementos repetidos. Gere
um vetor VET2 ordenado a partir do vetor VET e que terá apenas os elementos
não repetidos. */
#include <stdio.h>

#define tam 4

int main()
{
    int i, j, vet[tam], vet2[tam], aux, cont=0;

    printf("Preencha o vetor: \n");

    for(i = 0; i < tam; i++)
    {
        scanf("%d", &vet[i]);
    }

    // ordenando o vetor
    for(i = 0; i < tam-1; i++)
    {
        for(j = i+1; j < tam; j++)
        {
            if(vet[i] > vet[j])
            {
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }

    for(i = 0; i < tam; i++)
    {
       if(i == 0 | vet[i-1] != vet[i])
       {
           vet2[cont] = vet[i];
           cont++;
       }
    }
    printf("Vetor ordenado e sem repeticoes: \n");
    for(i = 0; i < cont; i++)
    {
        printf("%d \n", vet2[i]);
    }
    return 0;
}
