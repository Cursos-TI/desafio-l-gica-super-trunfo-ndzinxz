#include <stdio.h>

int main() {
    // Definição das variáveis para entrada do usuário
    char codigo_1[4], cidade_1[20];
    int populacao_1, pontos_turisticos_1;
    float area_1, pib_1;
    
    char codigo_2[4], cidade_2[20];
    int populacao_2, pontos_turisticos_2;
    float area_2, pib_2;

    int opcao;

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
    
    // Determinar a carta vencedora
    if (populacao_1 > populacao_2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n\n", cidade_1);
    } 
    
    if (populacao_1 < populacao_2) {
        printf("\nResultado: Carta 2 (%s) venceu!\n\n", cidade_2);
    } 
    
    else {
        printf("\nResultado: Empate!\n\n");
    }

    printf("----- MENU DE COMPARAÇÃO -----\n\n");

    printf("[1] - População\n");
    printf("[2] - Área\n");
    printf("[3] - PIB\n");
    printf("[4] - Pontos turisticos\n");
    printf("[5] - Densidade demografica\n\n");
    printf("Escolha uma das opções: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("População da ");
            if (populacao_1 > populacao_2) {
                printf("carta 1 é maior, por tanto venceu!\n");
                printf("População da carta 1: %d\n", populacao_1);
                printf("População da carta 2: %d\n", populacao_2);
            } else if (populacao_1 < populacao_2) {
                printf("carta 2 é maior, por tanto venceu!\n");
                printf("População da carta 1: %d\n", populacao_1);
                printf("População da carta 2: %d\n", populacao_2);
            } else {
                printf("Empate!\n");
            }
            break;
        case 2:
            printf("Área da ");
            if (area_1 > area_2) {
                printf("carta 1 é maior, por tanto venceu!\n");
                printf("Área da carta 1: %.2f km²\n", area_1);
                printf("Área da carta 2: %.2f km²\n", area_2);
            } else if (area_1 < area_2) {
                printf("carta 2 é maior, por tanto venceu!\n");
                printf("Área da carta 1: %.2f km²\n", area_1);
                printf("Área da carta 2: %.2f km²\n", area_2);
            } else {
                printf("Empate!\n");
            }
            break;
        case 3:
            printf("PIB da ");
            if (pib_1 > pib_2) {
                printf("carta 1 é maior, por tanto venceu!\n");
                printf("PIB da carta 1: %.2f bilhões\n", pib_1);
                printf("PIB da carta 2: %.2f bilhões\n", pib_2);
            } else if (pib_1 < pib_2) {
                printf("carta 2 é maior, por tanto venceu!\n");
                printf("PIB da carta 1: %.2f bilhões\n", pib_1);
                printf("PIB da carta 2: %.2f bilhões\n", pib_2);
            } else {
                printf("Empate!\n");
            }
            break;
        case 4:
            printf("Ponto turístico da ");
            if (pontos_turisticos_1 > pontos_turisticos_2) {
                printf("carta 1 é maior, por tanto venceu!\n");
                printf("Pontos turísticos da carta 1: %d\n", pontos_turisticos_1);
                printf("Pontos turísticos da carta 2: %d\n", pontos_turisticos_2);
            } else if (pontos_turisticos_1 < pontos_turisticos_2) {
                printf("carta 2 é maior, por tanto venceu!\n");
                printf("Pontos turísticos da carta 1: %d\n", pontos_turisticos_1);
                printf("Pontos turísticos da carta 2: %d\n", pontos_turisticos_2);
            } else {
                printf("Empate!\n");
            }
            break;
        case 5:
            printf("Densidade demográfica da ");
            if (densidade_1 > densidade_2) {
                printf("carta 1 é maior, por tanto venceu!\n");
                printf("Densidade demográfica da carta 1: %.2f\n", densidade_1);
                printf("Densidade demográfica da carta 2: %.2f\n", densidade_2);
            } else if (densidade_1 < densidade_2) {
                printf("carta 2 é maior, por tanto venceu!\n");
                printf("Densidade demográfica da carta 1: %.2f\n", densidade_1);
                printf("Densidade demográfica da carta 2: %.2f\n", densidade_2);
            } else {
                printf("Empate!\n");
            }
            break;
    }
    
    return 0;
}