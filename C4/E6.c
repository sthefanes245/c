/*Construa um programa que permita armazenar o sal�rio de 20 pessoas. Calcular
e armazenar o novo sal�rio sabendo-se que o reajuste foi de 8%. Imprimir uma
listagem numerada com o sal�rio e o novo sal�rio. Declare quantos vetores forem
necess�rios*/

#include <stdio.h>

#define reajuste 0.08

int main()
{
    float sal[20], newsal[20];
    int i;

    for(i = 0; i < 5; i++)
    {
        printf("Informe o salario da pessoa %d \n", i+1);
        scanf("%f", &sal[i]);
    }
    for(i = 0; i < 20; i++)
    {
        newsal[i] = (sal[i] * reajuste) + sal[i];
        printf("O antigo salario da pessoa %d eh %.2f o novo eh %.2f \n", i+1, sal[i], newsal[i]);
    }
    return 0;
}
