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
    int escolha1, escolha2;
    float valor1_attr1, valor1_attr2;
    float valor2_attr1, valor2_attr2;
    float soma1, soma2;


    // Leitura dos dados da Carta 1

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


    // Leitura dos dados da Carta 2

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


    // Cálculos dos atributos derivados

    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;
    pib_per_capita1 = (pib1 * 1000000000) / populacao1;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;
    super_poder1 = (float)populacao1 + area1 + (pib1 * 1000000000) + pontos_turisticos1 + pib_per_capita1 + (1.0 / densidade1);
    super_poder2 = (float)populacao2 + area2 + (pib2 * 1000000000) + pontos_turisticos2 + pib_per_capita2 + (1.0 / densidade2);


    // Escolha dos atributos

    printf("\nEscolha o PRIMEIRO atributo para comparar:\n");
    printf("1. População\n2. Área\n3. PIB\n4. Pontos Turísticos\n5. Densidade Populacional\n6. PIB per Capita\n7. Super Poder\n");
    scanf("%d", &escolha1);

    do {
        printf("\nEscolha o SEGUNDO atributo para comparar (diferente do primeiro):\n");
        scanf("%d", &escolha2);
        if (escolha2 == escolha1)
            printf("Escolha inválida! O segundo atributo deve ser diferente do primeiro.\n");
    } while (escolha2 == escolha1);


    // Atribuição dos valores selecionados

    switch(escolha1) {
        case 1: valor1_attr1 = populacao1; valor2_attr1 = populacao2; break;
        case 2: valor1_attr1 = area1; valor2_attr1 = area2; break;
        case 3: valor1_attr1 = pib1; valor2_attr1 = pib2; break;
        case 4: valor1_attr1 = pontos_turisticos1; valor2_attr1 = pontos_turisticos2; break;
        case 5: valor1_attr1 = densidade1; valor2_attr1 = densidade2; break;
        case 6: valor1_attr1 = pib_per_capita1; valor2_attr1 = pib_per_capita2; break;
        case 7: valor1_attr1 = super_poder1; valor2_attr1 = super_poder2; break;
        default: printf("Opção inválida!\n"); return 1;
    }

    switch(escolha2) {
        case 1: valor1_attr2 = populacao1; valor2_attr2 = populacao2; break;
        case 2: valor1_attr2 = area1; valor2_attr2 = area2; break;
        case 3: valor1_attr2 = pib1; valor2_attr2 = pib2; break;
        case 4: valor1_attr2 = pontos_turisticos1; valor2_attr2 = pontos_turisticos2; break;
        case 5: valor1_attr2 = densidade1; valor2_attr2 = densidade2; break;
        case 6: valor1_attr2 = pib_per_capita1; valor2_attr2 = pib_per_capita2; break;
        case 7: valor1_attr2 = super_poder1; valor2_attr2 = super_poder2; break;
        default: printf("Opção inválida!\n"); return 1;
    }

    // Cálculo da soma e determinação do vencedor

    soma1 = valor1_attr1 + valor1_attr2;
    soma2 = valor2_attr1 + valor2_attr2;

    printf("\n========== RESULTADO FINAL ==========\n");
    printf("Carta 1: %s\nCarta 2: %s\n", nome_cidade1, nome_cidade2);

    printf("\nAtributo 1 (%d): %.2f x %.2f\n", escolha1, valor1_attr1, valor2_attr1);
    printf("Atributo 2 (%d): %.2f x %.2f\n", escolha2, valor1_attr2, valor2_attr2);

    printf("\nSoma dos atributos:\nCarta 1: %.2f\nCarta 2: %.2f\n", soma1, soma2);

    // Tratamento de empate na soma
    soma1 > soma2 ? printf("\nCarta 1 (%s) venceu!\n", nome_cidade1)
                  : (soma1 < soma2 ? printf("\nCarta 2 (%s) venceu!\n", nome_cidade2)
                                   : printf("\nEmpate!\n"));

    return 0;
}
