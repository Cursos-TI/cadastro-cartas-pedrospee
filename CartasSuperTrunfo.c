#include <stdio.h>

int main() {

  // Dados da Carta 1
  char estado1;
  char codigo1[5];
  char cidade1[50];
  int populacao1;
  float area1;
  float pib1;
  int pontos1;

  // Dados da Carta 2
  char estado2;
  char codigo2[5];
  char cidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int pontos2;

  printf("===== SUPER TRUNFO - CADASTRO DE CARTAS =====\n\n");

  // Cadastro da Carta 1
  printf("--- Carta 1 ---\n");

  printf("Estado: ");
  scanf(" %c", &estado1);

  printf("Codigo: ");
  scanf("%4s", codigo1);

  printf("Cidade: ");
  scanf(" %49[^\n]", cidade1);

  printf("Populacao: ");
  scanf("%d", &populacao1);

  printf("Area (km2): ");
  scanf("%f", &area1);

  printf("PIB (bilhoes de reais): ");
  scanf("%f", &pib1);

  printf("Pontos turisticos: ");
  scanf("%d", &pontos1);

  // Cadastro da Carta 2
  printf("\n--- Carta 2 ---\n");

  printf("Estado: ");
  scanf(" %c", &estado2);

  printf("Codigo: ");
  scanf("%4s", codigo2);

  printf("Cidade: ");
  scanf(" %49[^\n]", cidade2);

  printf("Populacao: ");
  scanf("%d", &populacao2);

  printf("Area (km2): ");
  scanf("%f", &area2);

  printf("PIB (bilhoes de reais): ");
  scanf("%f", &pib2);

  printf("Pontos turisticos: ");
  scanf("%d", &pontos2);

  // Exibicao das cartas
  printf("\n\n===== CARTAS CADASTRADAS =====\n\n");

  printf("Carta 1:\n");
  printf("  Estado:            %c\n", estado1);
  printf("  Codigo:            %s\n", codigo1);
  printf("  Cidade:            %s\n", cidade1);
  printf("  Populacao:         %d habitantes\n", populacao1);
  printf("  Area:              %.2f km2\n", area1);
  printf("  PIB:               %.2f bilhoes de reais\n", pib1);
  printf("  Pontos turisticos: %d\n", pontos1);

  printf("\nCarta 2:\n");
  printf("  Estado:            %c\n", estado2);
  printf("  Codigo:            %s\n", codigo2);
  printf("  Cidade:            %s\n", cidade2);
  printf("  Populacao:         %d habitantes\n", populacao2);
  printf("  Area:              %.2f km2\n", area2);
  printf("  PIB:               %.2f bilhoes de reais\n", pib2);
  printf("  Pontos turisticos: %d\n", pontos2);

  printf("\nFim do cadastro.\n");

  return 0;
}
