#include <stdio.h>

int main() {  // variaveis
    char estado;
    int cidade;
    int populacao;
    int pontos_turisticos;
    float area;
    float pib;
    float densidade_populacional;
    float pib_per_capita;

    // Solicita ao usuário o código da carta (estado e cidade)
    printf("Digite a letra do estado (A-H): ");
    scanf(" %c", &estado);
    printf("Digite o número da cidade (1-4): ");
    scanf("%d", &cidade);

    // Solicita os dados da cidade
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade (em milhões): ");
    scanf("%f", &pib);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);

    // Calcula as propriedades adicionais
    densidade_populacional = populacao / area;
    pib_per_capita = (pib * 1000000) / populacao;  // Converte PIB para unidades monetárias

    // Exibe os dados da cidade
    printf("\nDados da Carta %c%02d:\n", estado, cidade);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f milhões\n", pib);
    printf("Pontos Turísticos: %d\n", pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional);
    printf("PIB per Capita: %.2f\n", pib_per_capita);

 return 0;
}