#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Nível: Mestre

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char state1[2], state2[2];                    // Estado
  char id1[4], id2[4];                          // Código da carta
  char name1[30], name2[30];                    // Nome da cidade
  unsigned long int population1, population2;   // População
  float area1, area2;                           // Área
  float pib1, pib2;                             // PIB - Produto interno bruto
  int touristSpotNumber1, touristSpotNumber2;   // Número de pontos turísticos
  float populationDensity1, populationDensity2; // Densidade populacional
  float pibPerCapita1, pibPerCapita2;           // PIB per Capita
  float superPower1, superPower2;               // Super poder

  // Entrada de dados da Carta 1
  printf("Carta 1\n");

  printf("Digite o estado (A - H):\n");
  scanf("%s", state1);
  
  printf("Digite o código da carta (ex: A01):\n");
  scanf("%s", id1);
  
  printf("Digite o nome da cidade (ex: Rio de Janeiro):\n");
  getchar();
  fgets(name1, sizeof(name1), stdin);
  name1[strlen(name1) - 1] = '\0';

  printf("Digite o número de habitantes da cidade (ex: 60000):\n");
  scanf("%lu", &population1);
  
  printf("Digite a área da cidade em km² (ex: 56467.24):\n");
  scanf("%f", &area1);
  
  printf("Digite o PIB da cidade em bilhões de reais (ex: 77.470):\n");
  scanf("%f", &pib1);
  
  printf("Digite o número de pontos turísticos da cidade (ex: 20):\n");
  scanf("%i", &touristSpotNumber1);
  
  printf("\n");

  // Entrada de dados da Carta 2
  printf("Carta 2\n");

  printf("Digite o estado (A - H):\n");
  scanf("%s", state2);
  
  printf("Digite o código da carta (ex: B02):\n");
  scanf("%s", id2);
  
  printf("Digite o nome da cidade (ex: São Paulo):\n");
  getchar();
  fgets(name2, sizeof(name2), stdin);
  name2[strlen(name2) - 1] = '\0';

  printf("Digite o número de habitantes da cidade (ex: 80000):\n");
  scanf("%lu", &population2);
  
  printf("Digite a área da cidade em km² (ex: 56467.24):\n");
  scanf("%f", &area2);
  
  printf("Digite o PIB da cidade em bilhões de reais (ex: 77.470):\n");
  scanf("%f", &pib2);
  
  printf("Digite o número de pontos turísticos da cidade (ex: 20):\n");
  scanf("%i", &touristSpotNumber2);

  printf("\n");

  // Cálculos da densidade populacional, PIB per Capita e super poder
  populationDensity1 = population1 / area1;
  populationDensity2 = population2 / area2;

  pibPerCapita1 = pib1 * 1e9 / population1;
  pibPerCapita2 = pib2 * 1e9 / population2;

  superPower1 = population1 + area1 + pib1 + touristSpotNumber1 + pibPerCapita1 + 1 / populationDensity1;
  superPower2 = population2 + area2 + pib2 + touristSpotNumber2 + pibPerCapita2 + 1 / populationDensity2;

  // Exibição dos dados da cidade 1
  printf("Carta 1\n");
  printf("Estado: %s\n", state1);
  printf("Código: %s\n", id1);
  printf("Nome da cidade: %s\n", name1);
  printf("População: %lu hab.\n", population1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Número de pontos turísticos: %i\n", touristSpotNumber1);
  printf("Densidade populacional: %.2f hab./km²\n", populationDensity1);
  printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

  printf("\n");

  // Exibição dos dados da cidade 2
  printf("Carta 2\n");
  printf("Estado: %s\n", state2);
  printf("Código: %s\n", id2);
  printf("Nome da cidade: %s\n", name2);
  printf("População: %lu hab.\n", population2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Número de pontos turísticos: %i\n", touristSpotNumber2);
  printf("Densidade populacional: %.2f hab./km²\n", populationDensity2);
  printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

  // Exibição da comparação das cartas
  printf("\n---\n\n");
  printf("Comparação de cartas - (1): Carta 1 vence / (0): Carta 2 vence\n");

  printf("População: (%d)\n", population1 > population2);
  printf("Área: (%d)\n", area1 > area2);
  printf("PIB: (%d)\n", pib1 > pib2);
  printf("Pontos turísticos: (%d)\n", touristSpotNumber1 > touristSpotNumber2);
  printf("Densidade populacional: (%d)\n", populationDensity1 < populationDensity2);
  printf("PIB per Capita: (%d)\n", pibPerCapita1 > pibPerCapita2);
  printf("Super poder: (%d)\n", superPower1 > superPower2);

  return 0;
}
