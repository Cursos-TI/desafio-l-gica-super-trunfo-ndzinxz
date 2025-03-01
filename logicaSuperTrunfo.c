#include <stdio.h>

int main() {
    // Definição das variáveis para entrada do usuário
    char codigo_1[4], cidade_1[20];
    int populacao_1, pontos_turisticos_1;
    float area_1, pib_1;
    
    char codigo_2[4], cidade_2[20];
    int populacao_2, pontos_turisticos_2;
    float area_2, pib_2;

    int opcao1, opcao2; 

    // Entrada de dados para a Carta 1
    printf("--- CARTA 1 ---\n");
    printf("Digite o Codigo: ");
    scanf("%s", codigo_1);
    printf("Digite a Cidade: ");
    scanf("%s", cidade_1);
    printf("Digite a Populacao: ");
    scanf("%d", &populacao_1);
    printf("Digite a Area: ");
    scanf("%f", &area_1);
    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib_1);
    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &pontos_turisticos_1);
    
    // Entrada de dados para a Carta 2
    printf("\n--- CARTA 2 ---\n");
    printf("Digite o Codigo: ");
    scanf("%s", codigo_2);
    printf("Digite a Cidade: ");
    scanf("%s", cidade_2);
    printf("Digite a Populacao: ");
    scanf("%d", &populacao_2);
    printf("Digite a Area: ");
    scanf("%f", &area_2);
    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib_2);
    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &pontos_turisticos_2);
    
    // Cálculo das propriedades
    float densidade_1 = populacao_1 / area_1;
    float densidade_2 = populacao_2 / area_2;
    int pib_percapita_1 = (pib_1 * 1000000000) / populacao_1;
    int pib_percapita_2 = (pib_2 * 1000000000) / populacao_2;
    
    // Escolha fixa do atributo para comparação
    char atributo_comparacao[] = "Populacao";
    
    // Exibir dados das cartas
    printf("\n--- Dados das Cartas ---\n");
    printf("\nCarta 1:\n");
    printf("Codigo: %s\n", codigo_1);
    printf("Cidade: %s\n", cidade_1);
    printf("Populacao: %d\n", populacao_1);
    printf("Area: %.2f km²\n", area_1);
    printf("PIB: %.2f bilhoes\n", pib_1);
    printf("PIB per capita: %d\n", pib_percapita_1);
    printf("Pontos Turisticos: %d\n", pontos_turisticos_1);
    printf("Densidade Populacional: %.2f\n", densidade_1);
    
    printf("\nCarta 2:\n");
    printf("Codigo: %s\n", codigo_2);
    printf("Cidade: %s\n", cidade_2);
    printf("Populacao: %d\n", populacao_2);
    printf("Area: %.2f km²\n", area_2);
    printf("PIB: %.2f bilhoes\n", pib_2);
    printf("PIB per capita: %d\n", pib_percapita_2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos_2);
    printf("Densidade Populacional: %.2f\n", densidade_2);

    // Menu de escolha de atributo para comparação
    printf("----- MENU DE COMPARAÇÃO -----\n\n");

    printf("[1] - População\n");
    printf("[2] - Área\n");
    printf("[3] - PIB\n");
    printf("[4] - Pontos turisticos\n");
    printf("Escolha o primeiro atributo para comparação: ");
    scanf("%d", &opcao1);

    printf("Escolha o segundo atributo para comparação: ");
    scanf("%d", &opcao2);

    // Comparação dos atributos
    int pontos_carta1 = 0;
    int pontos_carta2 = 0;

    switch (opcao1) {
        case 1:
            if (populacao_1 > populacao_2) pontos_carta1++;
            else if (populacao_1 < populacao_2) pontos_carta2++;
            printf("\nPopulação da carta 1: %d\n", populacao_1);
            printf("População da carta 2: %d\n", populacao_2);
            break;
        case 2:
            if (area_1 > area_2) pontos_carta1++;
            else if (area_1 < area_2) pontos_carta2++;
            printf("\nÁrea da carta 1: %.2f km²\n", area_1);
            printf("Área da carta 2: %.2f km²\n", area_2);
            break;
        case 3:
            if (pib_1 > pib_2) pontos_carta1++;
            else if (pib_1 < pib_2) pontos_carta2++;
            printf("\nPIB da carta 1: %.2f bilhões\n", pib_1);
            printf("PIB da carta 2: %.2f bilhões\n", pib_2);
            break;
        case 4:
            if (pontos_turisticos_1 > pontos_turisticos_2) pontos_carta1++;
            else if (pontos_turisticos_1 < pontos_turisticos_2) pontos_carta2++;
            printf("\nPontos turísticos da carta 1: %d\n", pontos_turisticos_1);
            printf("Pontos turísticos da carta 2: %d\n", pontos_turisticos_2);
            break;
    }

    switch (opcao2) {
        case 1:
            if (populacao_1 > populacao_2) pontos_carta1++;
            else if (populacao_1 < populacao_2) pontos_carta2++;
            printf("\nPopulação da carta 1: %d\n", populacao_1);
            printf("População da carta 2: %d\n", populacao_2);
            break;
        case 2:
            if (area_1 > area_2) pontos_carta1++;
            else if (area_1 < area_2) pontos_carta2++;
            printf("\nÁrea da carta 1: %.2f km²\n", area_1);
            printf("Área da carta 2: %.2f km²\n", area_2);
            break;
        case 3:
            if (pib_1 > pib_2) pontos_carta1++;
            else if (pib_1 < pib_2) pontos_carta2++;
            printf("\nPIB da carta 1: %.2f bilhões\n", pib_1);
            printf("PIB da carta 2: %.2f bilhões\n", pib_2);
            break;
        case 4:
            if (pontos_turisticos_1 > pontos_turisticos_2) pontos_carta1++;
            else if (pontos_turisticos_1 < pontos_turisticos_2) pontos_carta2++;
            printf("\nPontos turísticos da carta 1: %d\n", pontos_turisticos_1);
            printf("Pontos turísticos da carta 2: %d\n", pontos_turisticos_2);
            break;
    }
    
    if (pontos_carta1 > pontos_carta2) {
        printf("\nCarta 1 é maior em ambos os atributos, portanto venceu!\n");
    } else if (pontos_carta1 < pontos_carta2) {
        printf("Carta 2 é maior em ambos os atributos, portanto venceu!\n\n");
    } else {
        printf("\nEmpate nos dois atributos!\n\n");
    }
    
    return 0;
}