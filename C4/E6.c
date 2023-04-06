/*Construa um programa que permita armazenar o salário de 20 pessoas. Calcular
e armazenar o novo salário sabendo-se que o reajuste foi de 8%. Imprimir uma
listagem numerada com o salário e o novo salário. Declare quantos vetores forem
necessários*/

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
