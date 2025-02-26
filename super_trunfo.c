#include <stdio.h>
#include <string.h>  // Biblioteca necessária para usar a função 'strcspn'

int main() {
    // Definindo variáveis para armazenar os dados das cartas
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos1, pontos2;

    // Entrada de dados para a primeira carta
    printf("Digite as informacoes da primeira carta:\n");
    printf("Estado (A a H): ");
    scanf(" %c", &estado1);  // O espaço antes de %c é para consumir qualquer caractere de nova linha remanescente.
    printf("Codigo da carta (A01, B03...): ");
    scanf("%s", codigo1);
    
    printf("Nome da cidade: ");
    getchar();  // Limpa o caractere '\n' remanescente do último scanf
    fgets(cidade1, sizeof(cidade1), stdin);  // Lê a linha inteira
    cidade1[strcspn(cidade1, "\n")] = '\0';  // Remove o caractere '\n' ao final da string

    printf("Populacao da cidade: ");
    scanf("%d", &populacao1);
    printf("Area da cidade em km²: ");
    scanf("%f", &area1);
    printf("PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos1);

    // Entrada de dados para a segunda carta
    printf("\nDigite as informacoes da segunda carta:\n");
    printf("Estado (A a H): ");
    scanf(" %c", &estado2);
    printf("Codigo da carta (A01, B03...): ");
    scanf("%s", codigo2);
    
    printf("Nome da cidade: ");
    getchar();  // Limpa o caractere '\n' remanescente do último scanf
    fgets(cidade2, sizeof(cidade2), stdin);  // Lê a linha inteira
    cidade2[strcspn(cidade2, "\n")] = '\0';  // Remove o caractere '\n' ao final da string

    printf("Populacao da cidade: ");
    scanf("%d", &populacao2);
    printf("Area da cidade em km²: ");
    scanf("%f", &area2);
    printf("PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos2);

    // Exibindo as informações das duas cartas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos2);

    return 0;
}