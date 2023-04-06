/*Faça um programa em C que leia um número inteiro e imprima o seu antecessor
e o seu sucessor*/
int main()
{
    int n;

    printf("Informe um numero inteiro: \n");
    scanf("%d", &n);

    printf("Antecessor = %d \n", n-1);
    printf("Sucessor = %d \n", n+1);

    return 0;
}
