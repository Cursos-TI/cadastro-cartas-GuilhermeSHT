#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

   char estado;
   char nome [30];
   char carta [3];
   unsigned long int população;
   float área;
   float Pib;
   int turistico;
   double densidade, pbiper;
   float poder;

   printf("== CARTA 1= ==\n");

   printf("Digite o estado da sua cidade: ");
   scanf("%c", &estado);
   printf("Seu estado é: %c\n", estado);

   printf("DIgite o nome da sua cidade: ");
   scanf(" %s", nome);
   printf("O nome da cidade é: %s\n", nome);

   printf("Digite a população da sua cidade: ");
   scanf("%u", &população);
   printf("A população da sua cidade é: %u\n", população);

   printf("Digite a Área da sua cidade: ");
   scanf("%f", &área);
   printf("A área da sua cidade é: %.5f\n", área);

   printf("Digite o PIB da sua cidade: ");
   scanf("%f", &Pib);
   printf("O PIB da sua cidade é: %.5f\n", Pib);

   printf("Digite o número de pontos turísticos: ");
   scanf("%d", &turistico);
   printf("Números de pontos turíscticos: %d\n", turistico);

   printf("Digite o código da sua carta: ");
   scanf("%s", carta);
   printf("O código da sua carta é: %s\n", carta);

   densidade = (double) população / área;
   printf("Sua densidade populacional é: %.3lf\n", densidade);
   
   densidade = (double) Pib / população;
   printf("Seu PIB per Capita é: %.3lf\n", densidade);
    
   poder = (float) população + área + Pib + turistico + pbiper + (1.0 / densidade);
   
   printf("O Super Poder da carta 1 é: %f\n", poder);


   char estado2;
   char nome2[20];
   char carta2[3];
   unsigned long int população2;
   int turistico2;
   float área2;
   float Pib2;
   double densidade2, pbiper2;
   float poder2;

   printf(" == CARTA 2 == \n");


   printf("Digite o seu estado: ");
   scanf(" %c", &estado2);
   printf("Seu Estado é: %c\n", estado2);

   printf("Digite o nome da sua cidade: ");
   scanf("%s", nome2);
   printf("O nome da sua cidade é: %s\n", nome2);

   printf(" Digite a população da sua cidade: ");
   scanf("%u", &população2);
   printf("A população da sua cidade é: %u\n", população2);

   printf("Digite a área da sua cidade: ");
   scanf("%f", &área2);
   printf("A área da sua cidade é: %.5f\n", área2);

   printf("Digite o PIB da sua cidade: ");
   scanf("%f", &Pib2);
   printf("O PIB da sua cidade é: %.5f\n", Pib2);

   printf("Digite o número de pontos turísticos: ");
   scanf("%d", &turistico2);
   printf(" Números de pontos turísticos: %d\n", turistico2);

   printf("Digite o codígo da sua carta: ");
   scanf("%s", carta2);
   printf("O codígo da sua carta é: %s\n",carta2);

   densidade2 = (double) população2 / área2;
   printf("Sua densidade populacional é: %3.lf\n", densidade2);
   
   densidade2 = (double) Pib2 / população2;
   printf("Seu PIB per Capita é: %3.lf\n", densidade2);

   poder2 = população2 + área2 + Pib2 + turistico2 + pbiper2 + (1.0 / densidade2);
   printf("O Super poder da carta 2 é: %f\n", poder2);

  int resultadoA;

  resultadoA = população > população2;
  printf("População : a carta %d venceu\n", resultadoA);

  resultadoA = área > área2;
  printf("Área: a carta %d venceu\n", resultadoA);

  resultadoA = Pib > Pib2;
  printf("PIb: o pib %d venceu\n", resultadoA);

  resultadoA = turistico > turistico2;
  printf("Ponto turistico: ponto turistico %d venceu\n", resultadoA);

  resultadoA = pbiper > pbiper2;
  printf("Pbiper: Pibper %d venceu\n", resultadoA);
   
  resultadoA = densidade < densidade2;
  printf("Densidade: A densidade %d venceu\n", resultadoA);

  resultadoA = poder > poder2;
  printf("Poder: O poder %d venceu\n", resultadoA);
  








return 0;
} 
