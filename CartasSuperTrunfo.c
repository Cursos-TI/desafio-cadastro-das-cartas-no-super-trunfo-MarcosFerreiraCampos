#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
// Definição da estrutura da carta
typedef struct {
    char codigo[4]; // Código da carta (ex: A01, B02)
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Carta;

    Carta cidade;
    
    // Entrada de dados
    printf("Bem-vindo ao cadastro de cartas do Super Trunfo - Países!\n");
    
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", cidade.codigo);
    
    printf("Digite a população da cidade: ");
    scanf("%d", &cidade.populacao);
    
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &cidade.area);
    
    printf("Digite o PIB da cidade (em milhões): ");
    scanf("%f", &cidade.pib);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &cidade.pontos_turisticos);
    
    // Exibição dos dados
    printf("\nDados da cidade cadastrada:\n");
    printf("Código: %s\n", cidade.codigo);
    printf("População: %d habitantes\n", cidade.populacao);
    printf("Área: %.2f km²\n", cidade.area);
    printf("PIB: %.2f milhões\n", cidade.pib);
    printf("Pontos Turísticos: %d\n", cidade.pontos_turisticos);
    
    return 0;
}
