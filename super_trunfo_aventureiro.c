#include <stdio.h>
#include <string.h> // Para usar strcspn()

int main()
{
    // Definição da estrutura para armazenar os dados das cartas
    typedef struct {
        char estado;
        char codigo[5];
        char cidade[50];
        unsigned long int populacao;
        float area, pib;
        int pontos;
        float densidade, pibPerCapita, superPoder;
    } Carta;

    Carta carta1, carta2;

    // Entrada de dados para a primeira carta
    printf("Digite as informacoes da primeira carta:\n");
    printf("Estado (A a H): ");
    scanf(" %c", &carta1.estado);
    printf("Codigo da carta (A01, B03...): ");
    scanf("%s", carta1.codigo);

    printf("Nome da cidade: ");
    getchar();  // Limpa o buffer
    fgets(carta1.cidade, sizeof(carta1.cidade), stdin);
    carta1.cidade[strcspn(carta1.cidade, "\n")] = '\0'; // Remove o '\n'

    printf("Populacao da cidade: ");
    scanf("%lu", &carta1.populacao);
    printf("Area da cidade em km²: ");
    scanf("%f", &carta1.area);
    printf("PIB da cidade (em bilhões de reais): ");
    scanf("%f", &carta1.pib);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta1.pontos);

    // Entrada de dados para a segunda carta
    printf("\nDigite as informacoes da segunda carta:\n");
    printf("Estado (A a H): ");
    scanf(" %c", &carta2.estado);
    printf("Codigo da carta (A01, B03...): ");
    scanf("%s", carta2.codigo);

    printf("Nome da cidade: ");
    getchar();  // Limpa o buffer
    fgets(carta2.cidade, sizeof(carta2.cidade), stdin);
    carta2.cidade[strcspn(carta2.cidade, "\n")] = '\0'; // Remove o '\n'

    printf("Populacao da cidade: ");
    scanf("%lu", &carta2.populacao);
    printf("Area da cidade em km²: ");
    scanf("%f", &carta2.area);
    printf("PIB da cidade (em bilhões de reais): ");
    scanf("%f", &carta2.pib);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta2.pontos);

    // Cálculos
    carta1.densidade = carta1.populacao / carta1.area;
    carta2.densidade = carta2.populacao / carta2.area;
    carta1.pibPerCapita = carta1.pib / carta1.populacao;
    carta2.pibPerCapita = carta2.pib / carta2.populacao;

    carta1.superPoder = carta1.populacao + carta1.area + carta1.pib + carta1.pontos + carta1.pibPerCapita + (1 / carta1.densidade);
    carta2.superPoder = carta2.populacao + carta2.area + carta2.pib + carta2.pontos + carta2.pibPerCapita + (1 / carta2.densidade);

    // Exibição das informações das cartas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Codigo: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.cidade);
    printf("Populacao: %lu\n", carta1.populacao);
    printf("Area: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta1.pontos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta1.densidade);
    printf("PIB per Capita: %.2f bilhões de reais\n", carta1.pibPerCapita);
    printf("Super Poder: %.2f\n", carta1.superPoder);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Codigo: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.cidade);
    printf("Populacao: %lu\n", carta2.populacao);
    printf("Area: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta2.pontos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta2.densidade);
    printf("PIB per Capita: %.2f bilhões de reais\n", carta2.pibPerCapita);
    printf("Super Poder: %.2f\n", carta2.superPoder);

    // Comparação das cartas
    printf("\nComparação de Cartas:\n");
    printf("População: Carta %d venceu (%d)\n", (carta1.populacao > carta2.populacao) ? 1 : 2, (carta1.populacao > carta2.populacao));
    printf("Área: Carta %d venceu (%d)\n", (carta1.area > carta2.area) ? 1 : 2, (carta1.area > carta2.area));
    printf("PIB: Carta %d venceu (%d)\n", (carta1.pib > carta2.pib) ? 1 : 2, (carta1.pib > carta2.pib));
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (carta1.pontos > carta2.pontos) ? 1 : 2, (carta1.pontos > carta2.pontos));
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (carta1.densidade < carta2.densidade) ? 1 : 2, (carta1.densidade < carta2.densidade));
    printf("PIB per Capita: Carta %d venceu (%d)\n", (carta1.pibPerCapita > carta2.pibPerCapita) ? 1 : 2, (carta1.pibPerCapita > carta2.pibPerCapita));
    printf("Super Poder: Carta %d venceu (%d)\n", (carta1.superPoder > carta2.superPoder) ? 1 : 2, (carta1.superPoder > carta2.superPoder));

    return 0;
}
