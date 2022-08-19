/*Elabore um algoritmo que gera e escreve os números ímpares entre 100 e 200 */
#include <stdio.h>

int main()
{
    int num;

    for(num = 100; num <= 200; num++)
    {
        if(num % 2 != 0)
        {
            printf("%d\n", num);
        }
    }
    return 0;
}