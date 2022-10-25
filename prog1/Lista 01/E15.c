/*Faça um algoritmo que conte de 1 a 100 e a cada múltiplo de 10 emita a mensagem „Múltiplo de 10‟.

Para se certificar que um número a é múltiplo de um número b, basta dividir a por b. Se o resultado for
 exato, sem sobrar resto, a é múltiplo de b */
#include <stdio.h>

int main()
{

    for(int i = 1; i <= 100; i++)
    {
        if(i % 10 == 0)
        {
            printf("%d eh multiplo de 10 \n", i);
        }
    }

    return 0;
}
