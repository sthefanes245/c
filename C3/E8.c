/*Faça um programa que permita entrar com o nome e o salário bruto de 10 pessoas.
Após ler os dados, imprimir o nome e o valor da alíquota do imposto de renda
calculado conforme a tabela a seguir:
Salário IRRF
Salário menor que R$1300,00 Isento
Salário maior ou igual a R$1300,00 e menor que R$2300,00 10% do salário bruto
Salário maior ou igual a R$2300,00 15% do salário bruto
 */
#include <stdio.h>

int main()
{
    char nome[30];
    float sal_bruto;

    for(int i=1; i<=3; i++)
    {
        printf("Informe o nome: \n");
        scanf("%s", &nome);
        printf("Informe o salario bruto: \n");
        scanf("%f", &sal_bruto);
        if(sal_bruto < 1300)
        {
            printf("%s esta Insento \n", nome);
        }
        else if(sal_bruto < 2300)
        {
            printf("%s recebera %.2f da aliquota do imposto \n", nome, sal_bruto*0.10);
        }
        else
        {
            printf("%s recebera %.2f da aliquota do imposto \n", nome, sal_bruto*0.15);
        }
    }

    return 0;
}
