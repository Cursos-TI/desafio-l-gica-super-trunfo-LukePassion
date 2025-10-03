// Programa em C que cria cartas de Super Trunfo
#include <stdio.h>

int main() {
    // Variáveis das Cartas 1 e 2
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;

    // Leitura dos dados da Carta 1
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código da carta: ");
    scanf("%s", codigo1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1);  // permite nomes com espaços
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Calculando PIB per capita e Densidade Populacional da Carta 1
    float densidade1 = populacao1 / area1;
    float pib_per_capita1 = (pib1 * 1000000000) / populacao1; // convertido para reais por habitante

    printf("\nResumo da Carta 1:\n");
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("PIB per capita: %.2f\n", pib_per_capita1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);

    // Leitura dos dados da Carta 2
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código da carta: ");
    scanf("%s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2); // permite nomes com espaços
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Calculando PIB per capita e Densidade Populacional da Carta 2
    float densidade2 = populacao2 / area2;
    float pib_per_capita2 = (pib2 * 1000000000) / populacao2;

    printf("\nResumo da Carta 2:\n");
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("PIB per capita: %.2f\n", pib_per_capita2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);

    // Menu interativo
    int opcao;
    printf("\nEscolha o atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica (menor vence)\n");
    printf("6 - PIB per capita\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    printf("\nComparação escolhida:\n");

    switch (opcao) {
        case 1: // População
            printf("%s: %d habitantes\n", cidade1, populacao1);
            printf("%s: %d habitantes\n", cidade2, populacao2);
            if (populacao1 > populacao2) {
                printf("Vencedor: %s\n", cidade1);
            } else if (populacao2 > populacao1) {
                printf("Vencedor: %s\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2: // Área
            printf("%s: %.2f km²\n", cidade1, area1);
            printf("%s: %.2f km²\n", cidade2, area2);
            if (area1 > area2) {
                printf("Vencedor: %s\n", cidade1);
            } else if (area2 > area1) {
                printf("Vencedor: %s\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3: // PIB
            printf("%s: %.2f bilhões\n", cidade1, pib1);
            printf("%s: %.2f bilhões\n", cidade2, pib2);
            if (pib1 > pib2) {
                printf("Vencedor: %s\n", cidade1);
            } else if (pib2 > pib1) {
                printf("Vencedor: %s\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4: // Pontos turísticos
            printf("%s: %d pontos turísticos\n", cidade1, pontos_turisticos1);
            printf("%s: %d pontos turísticos\n", cidade2, pontos_turisticos2);
            if (pontos_turisticos1 > pontos_turisticos2) {
                printf("Vencedor: %s\n", cidade1);
            } else if (pontos_turisticos2 > pontos_turisticos1) {
                printf("Vencedor: %s\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5: // Densidade demográfica (menor vence)
            printf("%s: %.2f hab/km²\n", cidade1, densidade1);
            printf("%s: %.2f hab/km²\n", cidade2, densidade2);
            if (densidade1 < densidade2) {
                printf("Vencedor: %s (menor densidade)\n", cidade1);
            } else if (densidade2 < densidade1) {
                printf("Vencedor: %s (menor densidade)\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 6: // PIB per capita
            printf("%s: %.2f reais por habitante\n", cidade1, pib_per_capita1);
            printf("%s: %.2f reais por habitante\n", cidade2, pib_per_capita2);
            if (pib_per_capita1 > pib_per_capita2) {
                printf("Vencedor: %s\n", cidade1);
            } else if (pib_per_capita2 > pib_per_capita1) {
                printf("Vencedor: %s\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opção inválida!\n");
            break;
    }

    return 0;
}
