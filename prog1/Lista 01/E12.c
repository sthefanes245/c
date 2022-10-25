/*. Construa um algoritmo que leia 500 valores inteiros e positivos e:
a. Encontre o maior valor
b. Encontre o menor valor
c. Calcule a média dos números lidos */
#include <stdio.h>

#define tam 5

int main()
{
    int n, maior, menor;
    float media;

    maior = 0;
    media = 0;
    printf("Informe os numeros inteiros positivos: \n");
    for(int i=1; i<=tam; i++)
    {
        scanf("%d", &n);

       if(n > maior)
       {
           maior = n;
       }
       if((i == 1) || (n < menor))
       {
           menor = n;
       }
       media += n;
    }
    printf("maior= %d\n", maior);
    printf("menor= %d\n", menor);
    media = media / tam;
    printf("media= %.2f", media);

    return 0;
}
