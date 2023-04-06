/*Faça um programa em C que efetue a apresentação do valor da conversão em
real (R$) de um valor lido em dólar (US$). Para isso, será necessário também ler o
valor da cotação do dólar */
int main()
{
    float dolar, cota;

    printf("Informe o valor em dolar: \n");
    scanf("%f", &dolar);
    printf("Informe o valor da cotacao do dolar: \n");
    printf("%f", &cota);

    printf("Conversao para reais = %.2f\n", dolar*cota);

    return 0;
}
