#include <stdio.h>

int main() {
    // Declaração das variáveis
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nome_cidade1[100], nome_cidade2[100];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    float densidade1, densidade2;
    float pib_per_capita1, pib_per_capita2;
    float super_poder1, super_poder2;

    // ===============================
    // Leitura dos dados da Carta 1
    // ===============================
    printf("\nDigite os dados da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Código da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]s", nome_cidade1);

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Área (km²): ");
    scanf("%f", &area1);

    printf("PIB (bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // ===============================
    // Leitura dos dados da Carta 2
    // ===============================
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código da carta (ex: A01): ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]s", nome_cidade2);

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB (bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // ===============================
    // Cálculos dos atributos derivados
    // ===============================
    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;

    pib_per_capita1 = (pib1 * 1000000000) / populacao1;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;

    // Cálculo do Super Poder
    super_poder1 = (float)populacao1 + area1 + (pib1 * 1000000000) + pontos_turisticos1 + pib_per_capita1 + (1.0 / densidade1);
    super_poder2 = (float)populacao2 + area2 + (pib2 * 1000000000) + pontos_turisticos2 + pib_per_capita2 + (1.0 / densidade2);

    // ===============================
    // Exibição dos dados das cartas
    // ===============================
    printf("\n========== CARTA 1 ==========\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", nome_cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);

    printf("\n========== CARTA 2 ==========\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", nome_cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);

    // ===============================
    // Comparação das cartas
    // ===============================
    printf("\n========== COMPARAÇÃO DE CARTAS ==========\n");

    // Função de comparação para imprimir o vencedor
    if (populacao1 > populacao2)
        printf("População: Carta 1 (%s) venceu! [%lu > %lu]\n", nome_cidade1, populacao1, populacao2);
    else if (populacao1 < populacao2)
        printf("População: Carta 2 (%s) venceu! [%lu > %lu]\n", nome_cidade2, populacao2, populacao1);
    else
        printf("População: Empate! [%lu = %lu]\n", populacao1, populacao2);

    if (area1 > area2)
        printf("Área: Carta 1 (%s) venceu! [%.2f > %.2f]\n", nome_cidade1, area1, area2);
    else if (area1 < area2)
        printf("Área: Carta 2 (%s) venceu! [%.2f > %.2f]\n", nome_cidade2, area2, area1);
    else
        printf("Área: Empate! [%.2f = %.2f]\n", area1, area2);

    if (pib1 > pib2)
        printf("PIB: Carta 1 (%s) venceu! [%.2f > %.2f]\n", nome_cidade1, pib1, pib2);
    else if (pib1 < pib2)
        printf("PIB: Carta 2 (%s) venceu! [%.2f > %.2f]\n", nome_cidade2, pib2, pib1);
    else
        printf("PIB: Empate! [%.2f = %.2f]\n", pib1, pib2);

    if (pontos_turisticos1 > pontos_turisticos2)
        printf("Pontos Turísticos: Carta 1 (%s) venceu! [%d > %d]\n", nome_cidade1, pontos_turisticos1, pontos_turisticos2);
    else if (pontos_turisticos1 < pontos_turisticos2)
        printf("Pontos Turísticos: Carta 2 (%s) venceu! [%d > %d]\n", nome_cidade2, pontos_turisticos2, pontos_turisticos1);
    else
        printf("Pontos Turísticos: Empate! [%d = %d]\n", pontos_turisticos1, pontos_turisticos2);

    // Para densidade populacional, menor vence
    if (densidade1 < densidade2)
        printf("Densidade Populacional: Carta 1 (%s) venceu! [%.2f < %.2f]\n", nome_cidade1, densidade1, densidade2);
    else if (densidade1 > densidade2)
        printf("Densidade Populacional: Carta 2 (%s) venceu! [%.2f < %.2f]\n", nome_cidade2, densidade2, densidade1);
    else
        printf("Densidade Populacional: Empate! [%.2f = %.2f]\n", densidade1, densidade2);

    if (pib_per_capita1 > pib_per_capita2)
        printf("PIB per Capita: Carta 1 (%s) venceu! [%.2f > %.2f]\n", nome_cidade1, pib_per_capita1, pib_per_capita2);
    else if (pib_per_capita1 < pib_per_capita2)
        printf("PIB per Capita: Carta 2 (%s) venceu! [%.2f > %.2f]\n", nome_cidade2, pib_per_capita2, pib_per_capita1);
    else
        printf("PIB per Capita: Empate! [%.2f = %.2f]\n", pib_per_capita1, pib_per_capita2);

    if (super_poder1 > super_poder2)
        printf("Super Poder: Carta 1 (%s) venceu! [%.2f > %.2f]\n", nome_cidade1, super_poder1, super_poder2);
    else if (super_poder1 < super_poder2)
        printf("Super Poder: Carta 2 (%s) venceu! [%.2f > %.2f]\n", nome_cidade2, super_poder2, super_poder1);
    else
        printf("Super Poder: Empate! [%.2f = %.2f]\n", super_poder1, super_poder2);

    return 0; 
}
