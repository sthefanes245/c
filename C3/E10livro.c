#include <stdio.h>
 #include <stdlib.h>

 void main()
 {
 int i, j, peso, idade, pesado, jovem;
 float pesoMedio, idadeMedia=0, pesoMedioTotal=0, idadeMediaTotal=0;

 for (i=1; i<=2; i++) {
 pesoMedio = 0;
 idadeMedia = 0;
 pesado = 0;
 jovem = 0;
 printf("Informacoes do time: %d \n", i);
 for (j=1; j<=3; j++) {
 printf("Digite o peso: ");
 scanf("%d", &peso);
 printf("Digite a idade: ");
 scanf("%d", &idade);
 if (pesado < peso)
 pesado = peso;
 if (j == 1 || jovem > idade)
 jovem = idade;

 pesoMedio += peso;
 idadeMedia += idade;
 }
 pesoMedioTotal += pesoMedio;
 idadeMediaTotal += idadeMedia;
 idadeMedia = idadeMedia / (j-1);
 pesoMedio = pesoMedio / (j-1);
 printf("Idade media do time: %f \n", idadeMedia);
 printf("Peso medio do time: %f \n", pesoMedio);
 printf("Atleta mais pesado: %d \n", pesado);
 printf("Atleta mais jovem: %d \n", jovem);
 }
 pesoMedioTotal = pesoMedioTotal / ((i-1) * (j-1));
 idadeMediaTotal = idadeMediaTotal / ((i-1) * (j-1));
 printf("Peso medio de todos os participantes: %f \n", pesoMedioTotal);
 printf("Idade media de todos os participantes: %f \n", idadeMediaTotal);
 }

