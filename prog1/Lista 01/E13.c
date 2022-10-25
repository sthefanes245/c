/*. Faça um algoritmo que determine o maior entre N números lidos. A condição de parada é a entrada de
um valor 0, ou seja, o algoritmo deve ficar calculando o maior até que a entrada seja igual a 0 (ZERO). */
#include <stdio.h>


int main()
{
    float n, maior;
    maior = 0;
    while(n != 0)
    {
        printf("Informe um numero ou 0 para parar\n");
        scanf("%f", &n);

        if(n > maior)
        {
            maior = n;
        }
    }
    printf("O maior valor eh %.2f \n", maior);
    return 0;
}
