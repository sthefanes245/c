/*Fa�a um programa em C que leia a base e a altura de um ret�ngulo e imprima o
per�metro (base + altura) e a �rea (base * altura). */
int main()
{
    float base, altura;

    printf("Informe o valor da base e altura do retangulo, nessa ordem \n");
    scanf("%f %f", &base, &altura);

    printf("Perimetro = %.2f \n", base+altura);
    printf("Area = %.2f \n", base*altura);
    return 0;
}
