#include <stdio.h>
#include <string.h>

// Definindo a estrutura para representar uma carta
struct Carta {
    char codigo[4]; // Código da carta (ex: A01, B02)
    long long populacao;
    double area;
    long long pib;
    int pontos_turisticos;
    double densidade_populacional;
    double pib_per_capita;
    double super_poder;
};

// Função para calcular propriedades adicionais
void calcularPropriedades(struct Carta *carta) {
    carta->densidade_populacional = (double)carta->populacao / carta->area;
    carta->pib_per_capita = (double)carta->pib / carta->populacao;
    carta->super_poder = carta->populacao + carta->area + carta->pib + carta->pontos_turisticos + carta->densidade_populacional + carta->pib_per_capita;
}

// Função para comparar duas cartas
void compararCartas(struct Carta carta1, struct Carta carta2) {
    printf("\nComparando %s e %s:\n", carta1.codigo, carta2.codigo);

    // Comparação de Densidade Populacional (menor valor vence)
    printf("Densidade Populacional: ");
    if (carta1.densidade_populacional < carta2.densidade_populacional) {
        printf("%s vence!\n", carta1.codigo);
    } else if (carta1.densidade_populacional > carta2.densidade_populacional) {
        printf("%s vence!\n", carta2.codigo);
    } else {
        printf("Empate!\n");
    }

    // Comparação de População (maior valor vence)
    printf("População: ");
    if (carta1.populacao > carta2.populacao) {
        printf("%s vence!\n", carta1.codigo);
    } else if (carta1.populacao < carta2.populacao) {
        printf("%s vence!\n", carta2.codigo);
    } else {
        printf("Empate!\n");
    }

    // Comparação de Área (maior valor vence)
    printf("Área: ");
    if (carta1.area > carta2.area) {
        printf("%s vence!\n", carta1.codigo);
    } else if (carta1.area < carta2.area) {
        printf("%s vence!\n", carta2.codigo);
    } else {
        printf("Empate!\n");
    }

    // Comparação de PIB (maior valor vence)
    printf("PIB: ");
    if (carta1.pib > carta2.pib) {
        printf("%s vence!\n", carta1.codigo);
    } else if (carta1.pib < carta2.pib) {
        printf("%s vence!\n", carta2.codigo);
    } else {
        printf("Empate!\n");
    }

    // Comparação de Pontos Turísticos (maior valor vence)
    printf("Pontos Turísticos: ");
    if (carta1.pontos_turisticos > carta2.pontos_turisticos) {
        printf("%s vence!\n", carta1.codigo);
    } else if (carta1.pontos_turisticos < carta2.pontos_turisticos) {
        printf("%s vence!\n", carta2.codigo);
    } else {
        printf("Empate!\n");
    }

    // Comparação de PIB per Capita (maior valor vence)
    printf("PIB per Capita: ");
    if (carta1.pib_per_capita > carta2.pib_per_capita) {
        printf("%s vence!\n", carta1.codigo);
    } else if (carta1.pib_per_capita < carta2.pib_per_capita) {
        printf("%s vence!\n", carta2.codigo);
    } else {
        printf("Empate!\n");
    }

    // Comparação de Super Poder (maior valor vence)
    printf("Super Poder: ");
    if (carta1.super_poder > carta2.super_poder) {
        printf("%s vence!\n", carta1.codigo);
    } else if (carta1.super_poder < carta2.super_poder) {
        printf("%s vence!\n", carta2.codigo);
    } else {
        printf("Empate!\n");
    }
}

int main() {
    struct Carta carta1, carta2;

    // Cadastro da primeira carta
    printf("Cadastro da Carta 1\n");
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", carta1.codigo);
    printf("Digite a população: ");
    scanf("%lld", &carta1.populacao);
    printf("Digite a área (em km²): ");
    scanf("%lf", &carta1.area);
    printf("Digite o PIB: ");
    scanf("%lld", &carta1.pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta1.pontos_turisticos);

    // Cadastro da segunda carta
    printf("\nCadastro da Carta 2\n");
    printf("Digite o código da carta (ex: B02): ");
    scanf("%s", carta2.codigo);
    printf("Digite a população: ");
    scanf("%lld", &carta2.populacao);
    printf("Digite a área (em km²): ");
    scanf("%lf", &carta2.area);
    printf("Digite o PIB: ");
    scanf("%lld", &carta2.pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta2.pontos_turisticos);

    // Calcular propriedades adicionais
    calcularPropriedades(&carta1);
    calcularPropriedades(&carta2);

    // Exibir dados das cartas
    printf("\nDados da Carta %s:\n", carta1.codigo);
    printf("População: %lld\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %lld\n", carta1.pib);
    printf("Pontos Turísticos: %d\n", carta1.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta1.densidade_populacional);
    printf("PIB per Capita: %.2f\n", carta1.pib_per_capita);
    printf("Super Poder: %.2f\n", carta1.super_poder);

    printf("\nDados da Carta %s:\n", carta2.codigo);
    printf("População: %lld\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %lld\n", carta2.pib);
    printf("Pontos Turísticos: %d\n", carta2.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta2.densidade_populacional);
    printf("PIB per Capita: %.2f\n", carta2.pib_per_capita);
    printf("Super Poder: %.2f\n", carta2.super_poder);

    // Comparar as duas cartas
    compararCartas(carta1, carta2);

    return 0;
}