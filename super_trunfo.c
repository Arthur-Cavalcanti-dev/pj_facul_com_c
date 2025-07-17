#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nome_cidade1[100], nome_cidade2[100];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;

    // Leitura dos dados da Carta 1
    printf("\nDigite os dados da Carta 1:\n");
    printf("Estado (A-H): \n");
    scanf("%c", &estado1);

    printf("Código da carta (ex: A01): \n");
    scanf("%s", codigo1);

    printf("Nome da cidade: \n");
    scanf(" %[^\n]s", nome_cidade1);

    printf("População: \n");
    scanf("%d", &populacao1);

    printf("Área (km²): \n");
    scanf("%f", &area1);

    printf("PIB (bilhões de reais): \n");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos1);

    // Leitura dos dados da Carta 2
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado (A-H): \n");
    scanf(" %c", &estado2);

    printf("Código da carta (ex: A01): \n");
    scanf("%s", codigo2);

    printf("Nome da cidade: \n");
    scanf(" %[^\n]s", nome_cidade2);

    printf("População: \n");
    scanf("%d", &populacao2);

    printf("Área (km²): \n");
    scanf("%f", &area2);

    printf("PIB (bilhões de reais): \n");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos2);

    // Exibição dos dados da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);

    // Exibição dos dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

    return 0;
}