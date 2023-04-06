/*Faça um programa em C que leia um número real e calcule o quadrado deste
número. Ao final, o programa deve imprimir o resultado do cálculo */
int main()
{
    float n;

    printf("Informe um numero real \n");
    scanf("%f", &n);

    printf("Quadrado do numero = %.2f \n", n*n);
    return 0;
}
