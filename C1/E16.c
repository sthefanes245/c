/*Fa�a um programa em C que calcule o reajuste do sal�rio de um funcion�rio. Para
isso, o programa dever� ler o sal�rio atual do funcion�rio e ler o percentual de
reajuste. Ao final imprimir o valor do novo sal�rio */
int main()
{
    float sal_atual, reajuste, novo;

    printf("Informe o salario atual: \n");
    scanf("%f", &sal_atual);
    printf("Informe o percentual de reajuste: \n");
    scanf("%f", &reajuste);

    novo = sal_atual + (sal_atual*(reajuste/100));
    printf("Novo salario = %.2f \n", novo);

    return 0;
}
