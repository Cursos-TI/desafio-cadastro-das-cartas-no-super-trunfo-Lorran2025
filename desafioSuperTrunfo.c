#include <stdio.h>

int main(){
    //Dados da primeira carta
    char estado1[3], codigo_da_carta1[10], nome_da_cidade1[50];
    int numero_de_pontos_turisticos1;
    float area1, PIB1, densidade_populacional1, PIB_per_capita1;
    float divisao;
    unsigned long populacao1 = 1000000000;

    //Dados da segunda carta
    char estado2[3], codigo_da_carta2[10], nome_da_cidade2[50];
    int numero_de_pontos_turisticos2;
    float area2, PIB2, densidade_populacional2, PIB_per_capita2;
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

    printf("Densidade Populacional: %.2f hab/km\n", densidade_populacional1);
    printf("Pib per Capita: R$ %.2f\n", PIB_per_capita1);
    
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

    printf("Densidade Populacional: %.2f hab/km\n", densidade_populacional2);
    printf("Pib per Capita: R$ %.2f\n", PIB_per_capita2);

    "=== Comparação das Cartas === \n";

    if (populacao1 > populacao2)
    {    printf("Atributo: Populacao \n");
         printf("Carta 1 venceu \n");
    } else
    {   printf("Atributo: Populacao \n");
        printf("Carta 2 venceu \n");
    }
    
    if (numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2)
    {   printf("Atributo: Numero de pontos turisticos \n");
        printf("Carta 1 venceu \n");
    } else
    { printf("Atributo: Numero de pontos turisticos \n");
        printf("Carta 2 venceu \n");
     
    }
    
    if (area1 > area2)
    {   printf("Atributo: Area \n");
        printf("Carta 1 venceu \n");
    } else
        printf("Atributo: Area \n");
    {   printf("Carta 2 venceu \n");
    }

    if (PIB1 > PIB2)
    {   printf("Atributo: PIB \n");
        printf("Carta 1 venceu \n");
    } else
    {   printf("Atributo: PIB \n");
        printf("Carta 2 venceu \n");
    }
    
    if (densidade_populacional1 < densidade_populacional2)
    {   printf("Atributo: Densidade populacional \n");
        printf("Carta 1 venceu \n");
    } else
    {   printf("Atributo: Densidade populacional \n");
        printf("Carta 2 venceu \n");
    }

    if (PIB_per_capita1 > PIB_per_capita2)
    {   printf("Atributo: PIB per capita \n");
        printf("Carta 1 venceu \n");
    } else
    {   printf("Atributo: PIB per capita \n");
        printf("Carta 2 venceu \n");
    }
    
    return 0;
}