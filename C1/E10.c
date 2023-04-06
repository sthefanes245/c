/*Faça um programa em C que leia três números reais e calcule a média aritmética
destes números. Ao final, o programa deve imprimir o resultado do cálculo. */
int main()
{
    float n1, n2, n3, media;

    printf("Informe tres numeros reais: \n");
    scanf("%f %f %f", &n1, &n2, &n3);

    media = (n1 + n2 + n3) / 3;
    printf("media = %.2f \n", media);
    return 0;
}
