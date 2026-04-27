#include <stdio.h>

int main() {

  // Dados da Carta 1
  char estado1;
  char codigo1[5];
  char cidade1[50];
  unsigned long int populacao1;
  float area1;
  float pib1;
  int pontos1;
  float densidade1;     // Densidade populacional (hab/km2) - Nível Aventureiro
  float pibPerCapita1;  // PIB per capita (reais) - Nível Aventureiro
  float superPoder1;    // Super Poder - Nível Mestre

  // Dados da Carta 2
  char estado2;
  char codigo2[5];
  char cidade2[50];
  unsigned long int populacao2;
  float area2;
  float pib2;
  int pontos2;
  float densidade2;     // Densidade populacional (hab/km2) - Nível Aventureiro
  float pibPerCapita2;  // PIB per capita (reais) - Nível Aventureiro
  float superPoder2;    // Super Poder - Nível Mestre

  // Resultados das comparacoes - Nível Mestre
  int venceuPopulacao;
  int venceuArea;
  int venceuPib;
  int venceuPontos;
  int venceuDensidade;
  int venceuPibPerCapita;
  int venceuSuperPoder;

  printf("===== SUPER TRUNFO - CADASTRO DE CARTAS =====\n\n");

  // Cadastro da Carta 1 - Nível Iniciante
  printf("--- Carta 1 ---\n");

  printf("Estado: ");
  scanf(" %c", &estado1);

  printf("Codigo: ");
  scanf("%4s", codigo1);

  printf("Cidade: ");
  scanf(" %49[^\n]", cidade1);

  printf("Populacao: ");
  scanf("%lu", &populacao1);

  printf("Area (km2): ");
  scanf("%f", &area1);

  printf("PIB (bilhoes de reais): ");
  scanf("%f", &pib1);

  printf("Pontos turisticos: ");
  scanf("%d", &pontos1);

  // Cadastro da Carta 2 - Nível Mestre
  printf("\n--- Carta 2 ---\n");

  printf("Estado: ");
  scanf(" %c", &estado2);

  printf("Codigo: ");
  scanf("%4s", codigo2);

  printf("Cidade: ");
  scanf(" %49[^\n]", cidade2);

  printf("Populacao: ");
  scanf("%lu", &populacao2);

  printf("Area (km2): ");
  scanf("%f", &area2);

  printf("PIB (bilhoes de reais): ");
  scanf("%f", &pib2);

  printf("Pontos turisticos: ");
  scanf("%d", &pontos2);

  // Calculos da Carta 1
  densidade1 = populacao1 / area1;                    // Densidade populacional (hab/km2) - Nível Aventureiro
  pibPerCapita1 = (pib1 * 1000000000) / populacao1;   // PIB per capita (reais) - Nível Aventureiro

  // Calculos da Carta 2
  densidade2 = populacao2 / area2;                    // Densidade populacional (hab/km2) - Nível Aventureiro
  pibPerCapita2 = (pib2 * 1000000000) / populacao2;   // PIB per capita (reais) - Nível Aventureiro

  // Calculo do Super Poder - Nível Mestre (combinação ponderada de atributos)
  superPoder1 = (float)populacao1 + area1 + pib1 + pontos1 + pibPerCapita1 + (1 / densidade1);
  superPoder2 = (float)populacao2 + area2 + pib2 + pontos2 + pibPerCapita2 + (1 / densidade2);

  // Exibicao das cartas
  printf("\n\n===== CARTAS CADASTRADAS =====\n\n");

  printf("Carta 1:\n");
  printf("  Estado:            %c\n", estado1);
  printf("  Codigo:            %s\n", codigo1);
  printf("  Cidade:            %s\n", cidade1);
  printf("  Populacao:         %lu habitantes\n", populacao1);
  printf("  Area:              %.2f km2\n", area1);
  printf("  PIB:               %.2f bilhoes de reais\n", pib1);
  printf("  Pontos turisticos: %d\n", pontos1);
  printf("  Densidade Pop.:    %.2f hab/km2\n", densidade1);
  printf("  PIB per Capita:    %.2f reais\n", pibPerCapita1);
  printf("  Super Poder:       %.2f\n", superPoder1);           // Super Poder - Nível Mestre

  printf("\nCarta 2:\n");
  printf("  Estado:            %c\n", estado2);
  printf("  Codigo:            %s\n", codigo2);
  printf("  Cidade:            %s\n", cidade2);
  printf("  Populacao:         %lu habitantes\n", populacao2);
  printf("  Area:              %.2f km2\n", area2);
  printf("  PIB:               %.2f bilhoes de reais\n", pib2);
  printf("  Pontos turisticos: %d\n", pontos2);
  printf("  Densidade Pop.:    %.2f hab/km2\n", densidade2);
  printf("  PIB per Capita:    %.2f reais\n", pibPerCapita2);
  printf("  Super Poder:       %.2f\n", superPoder2);           // Super Poder - Nível Mestre

  // Comparacao das cartas - Nível Mestre
  venceuPopulacao    = populacao1 > populacao2;
  venceuArea         = area1 > area2;
  venceuPib          = pib1 > pib2;
  venceuPontos       = pontos1 > pontos2;
  venceuDensidade    = densidade1 < densidade2;
  venceuPibPerCapita = pibPerCapita1 > pibPerCapita2;
  venceuSuperPoder   = superPoder1 > superPoder2;

  // Resultado das comparacoes - Nível Mestre
  printf("\n\n===== COMPARACAO DE CARTAS =====\n\n");
  printf("Comparacao de Cartas:\n\n");
  printf("Populacao:              %s (%d)\n", venceuPopulacao    ? "Carta 1 venceu" : "Carta 2 venceu", venceuPopulacao);
  printf("Area:                   %s (%d)\n", venceuArea         ? "Carta 1 venceu" : "Carta 2 venceu", venceuArea);
  printf("PIB:                    %s (%d)\n", venceuPib          ? "Carta 1 venceu" : "Carta 2 venceu", venceuPib);
  printf("Pontos Turisticos:      %s (%d)\n", venceuPontos       ? "Carta 1 venceu" : "Carta 2 venceu", venceuPontos);
  printf("Densidade Populacional: %s (%d)\n", venceuDensidade    ? "Carta 1 venceu" : "Carta 2 venceu", venceuDensidade);
  printf("PIB per Capita:         %s (%d)\n", venceuPibPerCapita ? "Carta 1 venceu" : "Carta 2 venceu", venceuPibPerCapita);
  printf("Super Poder:            %s (%d)\n", venceuSuperPoder   ? "Carta 1 venceu" : "Carta 2 venceu", venceuSuperPoder);

  printf("\nFim do cadastro.\n");

  return 0;
}
