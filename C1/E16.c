/*Faça um programa em C que calcule o reajuste do salário de um funcionário. Para
isso, o programa deverá ler o salário atual do funcionário e ler o percentual de
reajuste. Ao final imprimir o valor do novo salário */
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
