/*Faça um programa em C que leia a base e a altura de um retângulo e imprima o
perímetro (base + altura) e a área (base * altura). */
int main()
{
    float base, altura;

    printf("Informe o valor da base e altura do retangulo, nessa ordem \n");
    scanf("%f %f", &base, &altura);

    printf("Perimetro = %.2f \n", base+altura);
    printf("Area = %.2f \n", base*altura);
    return 0;
}
