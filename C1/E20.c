/*Fa�a um programa em C que efetue a apresenta��o do valor da convers�o em
real (R$) de um valor lido em d�lar (US$). Para isso, ser� necess�rio tamb�m ler o
valor da cota��o do d�lar */
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
