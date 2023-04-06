/*Cria uma estrutura chamada retângulo. Essa estrutura deverá conter o ponto
superior esquerdo e o ponto inferior direito do retângulo. Cada ponto é definido
por uma estrutura Ponto, a qual contém as posições X e Y. Faça um programa
que declare e leia uma estrutura retângulo e exiba a área e o comprimento da
diagonal e o perímetro desse retângulo. */
#include <stdio.h>
#include <math.h>
typedef struct ret{
    float x;
    float y;

}retangulo;
int main()
{
    retangulo p_es, p_di;
    float area, comprimento_di, perimetro, base, altura;
    /*Valor x e y do ponto superior esquerdo*/
    printf("Insira o valor do ponto superior esquerdo - X \n");
    scanf("%f", &p_es.x);
    printf("Insira o valor do ponto superior esquerdo - Y \n");
    scanf("%f", &p_es.y);
    /*Valor x e y do ponto inferior direito*/
    printf("Insira o valor do ponto inferior direito - X \n");
    scanf("%f", &p_di.x);
    printf("Insira o valor do ponto inferior direito - Y \n");
    scanf("%f", &p_di.y);

    altura = (p_es.x - p_es.x) + (p_es.y - p_di.y);
    base = (p_di.x - p_es.x) + (p_di.y - p_di.y);
    area = base * altura;
    comprimento_di = (p_di.x - p_es.x) + (p_di.y - p_es.y);
    perimetro = (altura + base) * 2;

    printf("%f \n", altura);
    printf("%f \n", base);
    printf("Area: %.2f \n", area);
    printf("Comprimento diagonal: %.2f \n", comprimento_di);
    printf("Perimetro: %.2f \n", perimetro);

    return 0;
}
