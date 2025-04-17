#include <stdio.h>

int main(){
    //Dados da primeira carta
    char pais1[10];
    int numero_de_pontos_turisticos1;
    float area1, PIB1, densidade_populacional1, PIB_per_capita1;
    float divisao;
    unsigned long populacao1 = 1000000000;

    //Dados da segunda carta
    char pais2[10];
    int numero_de_pontos_turisticos2;
    float area2, PIB2, densidade_populacional2, PIB_per_capita2;
    unsigned long populacao2 = 1000000000;

    int opcao;

    //Cadastro da Primeira carta

    printf("=== Cadastro da Primeira Carta ===\n");

    printf("Digite o nome do pais: \n");
    scanf("%s", &pais1);

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

    printf("Densidade Populacional: %.2f hab/km\n", densidade_populacional1);
    printf("Pib per Capita: R$ %.2f\n", PIB_per_capita1);
    
    //Cadastro da Segunda carta

    printf("=== Cadastro da Segunda Carta ===\n");

    printf("Digite o nome do pais: \n");
    scanf("%s", &pais2);

    printf("Digite a sua populacao: \n");
    scanf("%lu", &populacao2);

    printf("Numero de pontos turisticos: \n");
    scanf("%d", &numero_de_pontos_turisticos2);

    printf("Digite a sua area: \n");
    scanf("%f", &area2);

    printf("Digite o seu PIB: \n");
    scanf("%f", &PIB2);

    densidade_populacional2 = populacao2 / area2;
    PIB_per_capita2 = PIB2 / populacao2;

    printf("Densidade Populacional: %.2f hab/km\n", densidade_populacional2);
    printf("Pib per Capita: R$ %.2f\n", PIB_per_capita2);

    printf("### Menu de Comparacao ### \n");
    printf("1. Populacao \n");
    printf("2. Numero de Pontos Turisticos \n");
    printf("3. Area \n");
    printf("4. PIB \n");
    printf("5. Densidade Populacional \n");
    printf("6. PIB per capita \n");
    printf("Selecione uma opcao: \n");
    scanf("%d", &opcao);

    "=== Comparação das Cartas === \n";

    switch (opcao) {
    case 1: printf("Atributo: Populacao \n");
            printf("%s: %lu\n", pais1, populacao1);
            printf("%s: %lu\n", pais2, populacao2);
    if (populacao1 > populacao2)
    {       printf("Carta 1 venceu \n");
    } else if(populacao2 > populacao1) {
            printf("Carta 2 venceu \n");
    }  else
    {   printf("Empate!! \n");
    } 
        break;
    
    case 2: printf("Atributo: Numero de Pontos Turisticos \n");
            printf("%s: %d\n", pais1, numero_de_pontos_turisticos1);
            printf("%s: %d\n", pais2, numero_de_pontos_turisticos2);
    if (numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2)
    {       printf("Carta 1 venceu \n");
    } else if(numero_de_pontos_turisticos2 > numero_de_pontos_turisticos1) {
            printf("Carta 2 venceu \n");
    }  else
    {   printf("Empate!! \n");
    } 
        break;

    case 3: printf("Atributo: Area \n");
            printf("%s: %.2f\n", pais1, area1);
            printf("%s: %.2f\n", pais2, area2);
    if (area1 > area2)
    {       printf("Carta 1 venceu \n");
    } else if(area2 > area1) {
            printf("Carta 2 venceu \n");
    }  else
    {   printf("Empate!! \n");
    } 
        break;

    case 4: printf("Atributo: PIB \n");
            printf("%s: %.2f\n", pais1, PIB1);
            printf("%s: %.2f\n", pais2, PIB2);
    if (PIB1 > PIB2)
    {       printf("Carta 1 venceu \n");
    } else if(PIB2 > PIB1) {
            printf("Carta 2 venceu \n");
    }  else
    {   printf("Empate!! \n"); 
    } 
        break;

    case 5: printf("Atributo: Densidade Populacional \n");
            printf("%s: %.2f\n", pais1, densidade_populacional1);
            printf("%s: %.2f\n", pais2, densidade_populacional2);
    if (densidade_populacional2 > densidade_populacional1)
    {       printf("Carta 1 venceu \n");
    } else if(densidade_populacional1 > densidade_populacional2) {
            printf("Carta 2 venceu \n");
    }  else
    {   printf("Empate!! \n");
    }
        break;

    case 6: printf("PIB per capita \n");
            printf("%s: %.2f\n", pais1, PIB_per_capita1);
            printf("%s: %.2f\n", pais2, PIB_per_capita2);
    if (PIB_per_capita1 > PIB_per_capita2)
    {       printf("Carta 1 venceu \n");
    } else if(PIB_per_capita2 > PIB_per_capita1) {
            printf("Carta 2 venceu \n");
    }  else
    {   printf("Empate!! \n");
    } 
        break;

    default: 
        printf("Opcao Invalida \n");
        break;
    
}

}