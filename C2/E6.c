/*A prefeitura do Rio de Janeiro abriu uma linha de crédito para os funcionários
estatutários. O valor máximo da prestação não poderá ultrapassar 30% do salário
bruto. Faça um programa em linguagem C que permita entrar com o salário bruto
e o valor da prestação e informar se o empréstimo pode ou não ser concedido. */
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
