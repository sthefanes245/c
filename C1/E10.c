/*Fa�a um programa em C que leia tr�s n�meros reais e calcule a m�dia aritm�tica
destes n�meros. Ao final, o programa deve imprimir o resultado do c�lculo. */
int main()
{
    float n1, n2, n3, media;

    printf("Informe tres numeros reais: \n");
    scanf("%f %f %f", &n1, &n2, &n3);

    media = (n1 + n2 + n3) / 3;
    printf("media = %.2f \n", media);
    return 0;
}
