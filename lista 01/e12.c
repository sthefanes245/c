/*Construa um algoritmo que leia 500 valores inteiros e positivos e:
a. Encontre o maior valor
b. Encontre o menor valor
c. Calcule a média dos números lidos */

/*tem algo errado */
#include <stdio.h>

#define tam 5
int main()
{
    int n, i, maior = 0, menor = 0, media;

    printf("Informe os valores: \n");
    for (i = 1; i <= tam; i++)
    {

        scanf("%d", &n);
        media = media + n;
    }

    for (i = 1; i <= tam; i++)
    {
        if (n > maior)
        {
            maior = n;
        }

        else
        {
            menor = n;
        }
    }

media = media / tam;
printf("Maior = %d \n", maior);
printf("Menor = %d \n", menor);
printf("Media = %d \n", media);
return 0;
}