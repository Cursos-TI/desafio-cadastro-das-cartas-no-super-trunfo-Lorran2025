#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    //Dados das cartas
    char pais1[] = "Brasil";
    char pais2[] = "Argentina";

    float populacao1 = 212.5, populacao2 = 47.3;
    int pontos_turisticos1 = 25, pontos_turisticos2 = 17;
    float area1 = 8.510, area2 = 2.780;
    float PIB1 = 11.7, PIB2 = 604.4;

    //Calculando a Densidade Populacional
    float densidade_populacional1 = populacao1 / area1;
    float densidade_populacional2 = populacao2 / area2;
    //Calculando o PIB per capita
    float PIB_per_capita1 = PIB1 / populacao1;
    float PIB_per_capita2 = PIB2 / populacao2;

    char primeiroAtributo, segundoAtributo;
    int resultado1, resultado2;

    printf("### Sejam bem-vindos ao jogo!! ### \n");
    printf("Escolha o primeiro atributo: \n");
    printf("P. Populacao \n");
    printf("N. Numero de Pontos Turisticos \n");
    printf("A. Area \n");
    printf("I. PIB \n");
    printf("D. Densidade Populacional \n");
    printf("B. PIB per capita \n");

    printf("Escolha a comparacao: \n");
    scanf(" %c", &primeiroAtributo);

    switch (primeiroAtributo) {
    case 'P': 
    case 'p': 
        printf("Voce escolheu a opcao Populacao \n");
        resultado1 = populacao1 > populacao2 ? 1 : 0;
        break;

    case 'N':
    case 'n':
        printf("Voce escolheu a opcao Numero de Pontos Turisticos \n");
        resultado1 = pontos_turisticos1 > pontos_turisticos2 ? 1 : 0;
        break;

    case 'A':
    case 'a':
        printf("Voce escolheu a opcao Area \n");
        resultado1 = area1 > area2 ? 1 : 0;
        break;

    case 'I':
    case 'i':
    printf("Voce escolheu a opcao PIB \n");
    resultado1 = PIB1 > PIB2 ? 1 : 0;
    break;
    
    case 'D':
    case 'd':
    printf("Voce escolheu a opcao Densidade Populacional \n");
    resultado1 = densidade_populacional1 < densidade_populacional2 ? 1 : 0;
    break;

    case 'B':
    case 'b':
    printf("Voce escolheu a opcao PIB per capita \n");
    resultado1 = PIB_per_capita1 > PIB_per_capita2 ? 1 : 0;
    break;

    default:
    printf("Opcao Invalida! \n");
    break;

} 

    printf("Escolha o segundo atributo: \n");
    printf("Atencao!! Voce deve escolher atributos diferentes. \n");
    printf("P. Populacao \n");
    printf("N. Numero de Pontos Turisticos \n");
    printf("A. Area \n");
    printf("I. PIB \n");
    printf("D. Densidade Populacional \n");
    printf("B. PIB per capita \n");

    printf("Escolha a comparacao: \n");
    scanf(" %c", &segundoAtributo);

    if (primeiroAtributo == segundoAtributo)
    {   printf("Voce escolheu o mesmo atributo! \n");
    } else {
    switch (segundoAtributo) {
    case 'P': 
    case 'p': 
        printf("Voce escolheu a opcao Populacao \n");
        resultado2 = populacao1 > populacao2 ? 1 : 0;
        break;
        
    case 'N':
    case 'n':
        printf("Voce escolheu a opcao Numero de Pontos Turisticos \n");
        resultado2 = pontos_turisticos1 > pontos_turisticos2 ? 1 : 0;
        break;
        
    case 'A':
    case 'a':
        printf("Voce escolheu a opcao Area \n");
        resultado2 = area1 > area2 ? 1 : 0;
        break;
        
    case 'I':
    case 'i':
    printf("Voce escolheu a opcao PIB \n");
    resultado2 = PIB1 > PIB2 ? 1 : 0;
    break;
            
    case 'D':
    case 'd':
    printf("Voce escolheu a opcao Densidade Populacional \n");
    resultado2 = densidade_populacional1 < densidade_populacional2 ? 1 : 0;
    break;
        
    case 'B':
    case 'b':
    printf("Voce escolheu a opcao PIB per capita \n");
    resultado2 = PIB_per_capita1 > PIB_per_capita2 ? 1 : 0;
    break;
        
    default: 
    printf("Opcao Invalida! \n");
    break;
        }
    }

    if (resultado1 > resultado2)
    {   printf("Parabens! Voce venceu!! \n");
    } else if(resultado1 < resultado2){
        printf("Infelizmente, voce perdeu! \n");
    } else
    {   printf("Empatou! \n");
    }
    
}