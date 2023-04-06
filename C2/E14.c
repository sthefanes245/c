/*Faça um programa que permita entrar com o salário de uma pessoa e imprima o
desconto do INSS segundo a tabela seguir:
 Salário Faixa de Desconto
Menor ou igual à R$600,00 Isento
Maior que R$600,00 e menor ou igual a R$1200,00 20%
Maior que R$1200,00 e menor ou igual a R$2000,00 25%
Maior que R$2000,00 30%*/
#include <stdio.h>

int main()
{
    float sal;

    printf("INFORME O SALARIO \n");
    scanf("%f", &sal);

    if(sal <= 600)
    {
        printf("Insento \n");
    }
    else if(sal <= 1200)
    {
        printf("20%: %.2f \n", sal *0.2);
    }
    else if(sal <= 2000)
    {
        printf("25%: %.2f \n", sal *0.25);
    }
    else
    {
        printf("30%: %.2f \n", sal *0.3);
    }

    return 0;
}
