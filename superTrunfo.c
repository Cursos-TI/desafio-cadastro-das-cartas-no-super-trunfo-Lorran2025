#include <stdio.h>

int main(){

    char estado[3], codigo_da_carta[10], nome_da_cidade[50];
    int populacao, numero_de_pontos_turisticos;
    float area, PIB, densidade_populacional, PIB_per_capita;
    float divisao;

    //Cadastro da Primeira carta

    printf("=== Cadastro da Primeira Carta ===\n");

    printf("Digite o estado: \n");
    scanf("%s", &estado);

    printf("Digite o codigo da carta: \n");
    scanf("%s", &codigo_da_carta);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome_da_cidade);

    printf("Digite a populacao: \n");
    scanf("%d", &populacao);

    printf("Numero de pontos turisticos: \n");
    scanf("%d", &numero_de_pontos_turisticos);

    printf("Digite a sua area: \n");
    scanf("%f", &area);

    printf("Digite o seu PIB: \n");
    scanf("%f", &PIB);

    densidade_populacional = populacao / area;
    PIB_per_capita = PIB / populacao;

    printf("Densidade Populacional: %.2f hab/km\n", densidade_populacional);
    printf("Pib per Capita: R$ %.2f\n", PIB_per_capita);

    //Cadastro da Segunda carta

    printf("=== Cadastro da Segunda Carta ===\n");

    printf("Digite o estado: \n");
    scanf("%s", &estado);

    printf("Digite o codigo da carta: \n");
    scanf("%s", &codigo_da_carta);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome_da_cidade);

    printf("Digite a sua populacao: \n");
    scanf("%d", &populacao);

    printf("Numero de pontos turisticos: \n");
    scanf("%d", &numero_de_pontos_turisticos);

    printf("Digite a sua area: \n");
    scanf("%f", &area);

    printf("Digite o seu PIB: \n");
    scanf("%f", &PIB);

    densidade_populacional = populacao / area;
    PIB_per_capita = PIB / populacao;

    printf("Densidade Populacional: %.2f hab/km\n", densidade_populacional);
    printf("Pib per Capita: R$ %.2f\n", PIB_per_capita);

    return 0;

}