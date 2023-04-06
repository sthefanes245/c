/* Crie uma estrutura para representar as coordenadas de um ponto no plano (posições X e Y). Em seguida, declare e leia do teclado
um ponto e exiba a distância dele até a origem das coordenadas, isto é, posição (0, 0). Para realizar o cálculo,

Em que:
• d = distância entre os pontos A e B
• X = coordenada X em um ponto
• Y = coordenada Y em um ponto
*/
#include  <stdio.h>
#include <math.h>

typedef struct ponto_plano{
    int x;
    int y;
}Ponto;

int main()
{
    Ponto p;
    float resul;

    printf("Informe o ponto x: \n");
    scanf("%d", &p.x);
    printf("Informe o ponto y: \n");
    scanf("%d", &p.y);

    resul = sqrt(pow(p.x - 0, 2) + pow(p.y - 0, 2)); //sqrt é pra calcular a raiz, lembrando que precisa adicionar a biblioteca <math.h>

    printf("A distancia do ponto (0, 0) eh: %f \n", resul);
    return 0;
}
