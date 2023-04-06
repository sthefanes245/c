/*A prefeitura do Rio de Janeiro abriu uma linha de cr�dito para os funcion�rios
estatut�rios. O valor m�ximo da presta��o n�o poder� ultrapassar 30% do sal�rio
bruto. Fa�a um programa em linguagem C que permita entrar com o sal�rio bruto
e o valor da presta��o e informar se o empr�stimo pode ou n�o ser concedido. */
#include <stdio.h>

#define max 0.3

int main()
{
    float sal_bruto, val_prestacao, resul;

    printf("Informe o salario bruto: \n");
    scanf("%f", &sal_bruto);
    printf("Informe o valor da prestacao: \n");
    scanf("%f", &val_prestacao);

    resul = sal_bruto * max;

    if(val_prestacao <= resul)
    {
        printf("Emprestimo autorizado \n");
    }
    else
    {
        printf("Emprestimo nao autorizado \n");
    }
    return 0;
}
