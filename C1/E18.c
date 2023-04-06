/*Faça um programa em C que calcule a quantidade de litros de combustível consumidos em uma viagem, sabendo-se que o carro tem autonomia de 12 km por
litro de combustível. O programa deverá ler o tempo decorrido na viagem e a
velocidade média e aplicar as fórmulas:
D = T ×V
L = D/12

Em que:
• D = Distância percorrida em horas
• T = Tempo decorrido
• V = Velocidade média
• L = Litros de combustível consumidos
Ao final, o programa deverá imprimir a distância percorrida e a quantidade de
litros consumidos na viagem.
*/
int main()
{
    float tempo, velocidade_media, distancia, litros;

    printf("Informe o tempo em horas: \n");
    scanf("%f", &tempo);
    printf("Informe a velocidade media: \n");
    scanf("%f", &velocidade_media);

    distancia = tempo*velocidade_media;
    litros = distancia / 12;

    printf("A distancia percorrida foi de %.3f km usando %.2f litros \n", distancia, litros);

    return 0;
}
