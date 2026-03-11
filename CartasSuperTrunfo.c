#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

   char estado;
   char nome [30];
   char carta [3];
   int população;
   float área;
   float Pib;
   int turistico;

   printf("== CARTA 1= ==\n");

   printf("Digite o estado da sua cidade: ");
   scanf("%c", &estado);
   printf("Seu estado é: %c\n", estado);

   printf("DIgite o nome da sua cidade: ");
   scanf(" %s", nome);
   printf("O nome da cidade é: %s\n", nome);

   printf("Digite a população da sua cidade: ");
   scanf("%d", &população);
   printf("A população da sua cidade é: %d\n", população);

   printf("Digite a Área da sua cidade: ");
   scanf("%f", &área);
   printf("A área da sua cidade é: %f\n", área);

   printf("Digite o PIB da sua cidade: ");
   scanf("%f", &Pib);
   printf("O PIB da sua cidade é: %f\n", Pib);

   printf("Digite o número de pontos turísticos: ");
   scanf("%d", &turistico);
   printf("Números de pontos turíscticos: %d\n", turistico);

   printf("Digite o código da sua carta: ");
   scanf("%s", carta);
   printf("O código da sua carta é: %s\n", carta);


   char estado2;
   char nome2[20];
   char carta2[3];
   int população2;
   int turistico2;
   float área2;
   float Pib2;

   printf(" == CARTA 2 == \n");


   printf("Digite o seu estado: ");
   scanf(" %c", &estado2);
   printf("Seu Estado é: %c\n", estado2);

   printf("Digite o nome da sua cidade: ");
   scanf("%s", nome2);
   printf("O nome da sua cidade é: %s\n", nome2);

   printf(" Digite a população da sua cidade: ");
   scanf("%d", &população2);
   printf("A população da sua cidade é: %d\n", população2);

   printf("Digite a área da sua cidade: ");
   scanf("%f", &área2);
   printf("A área da sua cidade é: %f\n", área2);

   printf("Digite o PIB da sua cidade: ");
   scanf("%f", &Pib2);
   printf("O PIB da sua cidade é: %f\n", área2);

   printf("Digite o número de pontos turísticos: ");
   scanf("%d", &turistico2);
   printf(" Números de pontos turísticos: %d\n", turistico2);

   printf("Digite o codígo da sua carta: ");
   scanf("%s", carta2);
   printf("O codígo da sua carta é: %s\n",carta2);







return 0;
} 
