/*Fa�a um programa em C que calcule a quantidade de litros de combust�vel consumidos em uma viagem, sabendo-se que o carro tem autonomia de 12 km por
litro de combust�vel. O programa dever� ler o tempo decorrido na viagem e a
velocidade m�dia e aplicar as f�rmulas:
D = T �V
L = D/12

Em que:
� D = Dist�ncia percorrida em horas
� T = Tempo decorrido
� V = Velocidade m�dia
� L = Litros de combust�vel consumidos
Ao final, o programa dever� imprimir a dist�ncia percorrida e a quantidade de
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
