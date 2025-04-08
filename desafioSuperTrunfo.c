#include <stdio.h>

int main(){
    //Dados da primeira carta
    char estado1[3], codigo_da_carta1[10], nome_da_cidade1[50];
    int numero_de_pontos_turisticos1;
    float area1, PIB1, densidade_populacional1, PIB_per_capita1, Super_Poder1, inverso_da_densidade_populacional1;
    float divisao;
    unsigned long populacao1 = 1000000000;

    //Dados da segunda carta
    char estado2[3], codigo_da_carta2[10], nome_da_cidade2[50];
    int numero_de_pontos_turisticos2;
    float area2, PIB2, densidade_populacional2, PIB_per_capita2, Super_Poder2, inverso_da_densidade_populacional2;
    unsigned long populacao2 = 1000000000;

    //Cadastro da Primeira carta

    printf("=== Cadastro da Primeira Carta ===\n");

    printf("Digite o estado: \n");
    scanf("%s", estado1);

    printf("Digite o codigo da carta: \n");
    scanf("%s", &codigo_da_carta1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome_da_cidade1);

    printf("Digite a populacao: \n");
    scanf("%lu", &populacao1);

    printf("Numero de pontos turisticos: \n");
    scanf("%d", &numero_de_pontos_turisticos1);

    printf("Digite a sua area: \n");
    scanf("%f", &area1);

    printf("Digite o seu PIB: \n");
    scanf("%f", &PIB1);

    densidade_populacional1 = populacao1 / area1;
    PIB_per_capita1 = PIB1 / populacao1;
    inverso_da_densidade_populacional1 = area1 / populacao1;
    Super_Poder1 = populacao1 + numero_de_pontos_turisticos1 + area1 + PIB1 + PIB_per_capita1 + inverso_da_densidade_populacional1;

    printf("Densidade Populacional: %.2f hab/km\n", densidade_populacional1);
    printf("Pib per Capita: R$ %.2f\n", PIB_per_capita1);
    printf("Inverso da Densidade Populacional: %.2f hab/km \n", inverso_da_densidade_populacional1);
    printf("Super Poder: %.2f\n", Super_Poder1);
    
    //Cadastro da Segunda carta

    printf("=== Cadastro da Segunda Carta ===\n");

    printf("Digite o estado: \n");
    scanf("%s", &estado2);

    printf("Digite o codigo da carta: \n");
    scanf("%s", &codigo_da_carta2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome_da_cidade2);

    printf("Digite a sua populacao : \n");
    scanf("%lu", &populacao2);

    printf("Numero de pontos turisticos: \n");
    scanf("%d", &numero_de_pontos_turisticos2);

    printf("Digite a sua area: \n");
    scanf("%f", &area2);

    printf("Digite o seu PIB: \n");
    scanf("%f", &PIB2);

    densidade_populacional2 = populacao2 / area2;
    PIB_per_capita2 = PIB2 / populacao2;
    inverso_da_densidade_populacional2 = area2 / populacao2;
    Super_Poder2 = populacao2 + numero_de_pontos_turisticos2 + area2 + PIB2 + PIB_per_capita2 + inverso_da_densidade_populacional2;

    printf("Densidade Populacional: %.2f hab/km\n", densidade_populacional2);
    printf("Pib per Capita: R$ %.2f\n", PIB_per_capita2);
    printf("Inverso da Densidade Populacional: %.2f hab/km \n", inverso_da_densidade_populacional2);
    printf("Super Poder: %.2f\n", Super_Poder2);

    "=== Comparação das Cartas === \n";

    printf("Populacao: %s venceu \n", (populacao1 > populacao2) ? "Carta1" : "Carta2");
    printf("Numero de Pontos Turisticos: %s venceu \n", (numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2) ? "Carta1" : "Carta2");
    printf("Area: %s venceu \n", (area1 > area2) ? "Carta1" : "Carta2");
    printf("PIB: %s venceu \n", (PIB1 > PIB2) ? "Carta1" : "Carta2");
    printf("Densidade Populacional: %s venceu \n", (densidade_populacional1 > densidade_populacional2) ? "Carta1" : "Carta2");
    printf("PIB per capita: %s venceu \n", (PIB_per_capita1 > PIB_per_capita2) ? "Carta1" : "Carta2");
    printf("Super Poder: %s venceu \n", (Super_Poder1 > Super_Poder2) ? "Carta1" : "Carta2");
    
    return 0;
}