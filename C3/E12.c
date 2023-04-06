/*. Dado um pa�s A, com 5 milh�es de habitantes e uma taxa de natalidade de 3% ao
ano, e um pa�s B com 7 milh�es de habitantes e uma taxa de natalidade de 2% ao
ano, fazer um programa que calcule e imprima o tempo necess�rio para que a
popula��o do pa�s A ultrapasse a popula��o do pa�s B.*/
#include <stdio.h>

int main()
{
    int ano=0;
    float a=5000000, b=7000000;

    while(a < b)
    {
        a += a * 0.03;
        b += b * 0.02;
        ano++;
    }
    printf("Tempo necessario para que a populacao do pais A ultrapasse a populacao do pais B = %d \n", ano);

    return 0;
}
