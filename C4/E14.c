/*Faça um programa que armazene 50 números inteiros em um vetor. O programa
deve gerar e imprimir um segundo vetor em que cada elemento é o quadrado do
elemento do primeiro vetor.
 */
#include <stdio.h>

int main()
{
    int vet[50], i, vet_q[50];

    printf("Preencha o vetor: \n");
    for(i = 0; i < 50; i++)
    {
        scanf("%d", &vet[i]);
        vet_q[i] = vet[i] * vet[i] ;
    }

    printf("o novo vetor eh: \n");
    for(i = 0; i < 50; i++)
    {
        printf("%d \n", vet_q[i]);
    }
    return 0;
}
