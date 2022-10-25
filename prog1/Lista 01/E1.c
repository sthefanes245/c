/*Elabore um algoritmo que leia o CPF e o número de horas trabalhadas de um operário. Calcule o salário
sabendo-se que ele ganha R$ 10,00 por hora. Quando o número de horas exceder a 50, calcule o
excesso de pagamento armazenando-o em outra variável, caso contrário zerar tal variável. A hora
excedente de trabalho vale R$ 20,00. No final do processamento mostre o salário total e o salário
excedente do trabalhador. */
#include <stdio.h>

int main()
{
    char cpf[11];
    int h_trabalhadas;
    float sal=0, excedente, h_excedente=0;

    printf("Informe o CPF: \n");
    scanf("%s", &cpf);
    printf("Informe a quantidade de horas trabalhadas: \n");
    scanf("%d", &h_trabalhadas);


    sal = h_trabalhadas * 10.00;

    if(h_trabalhadas > 50)
    {
        h_excedente = h_trabalhadas - 50;
        excedente = h_excedente * 20.00;
        sal = (50*10) + excedente;
    }
    else
    {
        excedente = 0;
    }

    printf("O salario total eh de: %.2f \n", sal);
    printf("O salario excedente eh de: %.2f \n", excedente);

    return 0;
}
