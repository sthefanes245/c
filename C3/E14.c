/*Fa�a um programa que leia v�rios n�meros inteiros e apresente o fatorial de cada
n�mero. O algoritmo encerra quando se digita um n�mero menor do que 1.
*/
#include <stdio.h>

int main()
{
    int n, fat;
    do{
        printf("Informe um numero inteiro ou um numero menor que 1 para parar\n");
        scanf("%d", &n);
        for(int i=n; i>0; i--)
        {
            fat *= i;
        }

            printf("Fatorial = %d \n", fat);


            fat=1;
    }while(n > 1);

    return 0;
}

