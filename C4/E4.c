/*Faça um programa que armazene 8 números em um vetor e imprima todos os
números. Ao final, imprima o total de números múltiplos de seis.
*/

#include <stdio.h>

int main()
{
    int vet[8];
    int i, cont=0;

    printf("Informe os 8 numeros: \n");
    for(i=0; i<8; i++)
    {
        scanf("%d", &vet[i]);

        if(vet[i] % 6 == 0)
        {
            cont++;
        }
    }

    printf("O total de numeros multiplos de seis eh %d", cont);

    return 0;
}
