#include <stdio.h>



int main() {
    // Dados da primeria carta
    char estado1 [3];
    char codigoCarta1 [5];
    char nomeCidade1 [50]; // não deixar espaço em branco quando rodar o código " usar hífen" no nome da cidade
    
    unsigned long int populacao1;
    float area1;
    float pib1;
    int numero_pontos_turisticos1;

    float densidadePopulacional1 = populacao1 / area1;
    float pib_per_capita1 = pib1 / populacao1;


    // dados da segunda carta

    char estado2 [3];
    char codigoCarta2 [5];
    char nomeCidade2 [50]; // não deixar espaço em branco quando rodar o código " usar hífen" no nome da cidade
    
    unsigned long int populacao2;
    float area2;
    float pib2;
    int numero_pontos_turisticos2;

    float densidadePopulacional2 = populacao2 / area2;
    float pib_per_capita2 = pib2 / populacao2;

    printf("*** Entrada de dados da Carta 1 ***\n");

    printf("Entre com o Estado:\n");
    scanf("%s", &estado1);

    printf("Entre com o Código Carta:\n");
    scanf("%s", &codigoCarta1);

    printf("Entre com o Nome da cidade:\n");
    scanf("%s", &nomeCidade1);

    printf("Entre com a população:\n");
    scanf("%lu", &populacao1);

    printf("Entre com a área:\n");
    scanf("%f", &area1);

    printf("Entre com PIB:\n");
    scanf("%f", &pib1);

    printf("Entre com o ponto turistico:\n");
    scanf("%i", &numero_pontos_turisticos1);


    printf("*** Entrada de dados da Carta 2 ***\n");

    printf("Entre com o Estado:\n");
    scanf("%s", &estado2);

    printf("Entre com o Código Carta:\n");
    scanf("%s", &codigoCarta2);

    printf("Entre com o Nome da cidade:\n");
    scanf("%s", &nomeCidade2);

    printf("Entre com a população:\n");
    scanf("%lu", &populacao2);

    printf("Entre com a área:\n");
    scanf("%f", &area2);

    printf("Entre com PIB:\n");
    scanf("%f", &pib2);

    printf("Entre com o ponto turistico:\n");
    scanf("%i", &numero_pontos_turisticos2);

    
    if (pib_per_capita1 > pib_per_capita2) {
        prinf("PIB per Capita da Carta 1 é maior.\n");
        printf("A cidade 1 venceu: %s", nomeCidade1);
    } else {
        printf("PIB per capita da Carta 2 é maior.\n");
        printf("A cidade 2 venceu: %s", nomeCidade2);
    }
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }
   
    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);
    // saída de dados Carta 1
    printf("*** Saída de dados Carta 1 ***\n");

    printf("Estado Carta 1: %s\n", estado1);
    printf("Código Carta 1: %s\n", codigoCarta1);
    printf("Nome da Cidade Carta 1: %s\n", nomeCidade1);
    printf("População Carta 1: %.2lu\n", populacao1);
    printf("Área Carta 1: %.2f\n", area1);
    printf("PIB Carta 1: %.2F\n", pib1);
    printf("Pontos Turisticos Carta 1: %i\n", numero_pontos_turisticos1);

    printf("Densidade Populacional Carta 1: %.2f\n", densidadePopulacional1);
    printf("PIB per Capita Carta 1: %.2f\n", pib_per_capita1);

    // Saída de dados Carta 2

    printf("*** Saída de dados Carta 2 ***\n");

    printf("Estado Carta 1: %s\n", estado2);
    printf("Código Carta 1: %s\n", codigoCarta2);
    printf("Nome da Cidade Carta 1: %s\n", nomeCidade2);
    printf("População Carta 1: %.2lu\n", populacao2);
    printf("Área Carta 1: %.2f\n", area2);
    printf("PIB Carta 1: %.2F\n", pib2);
    printf("Pontos Turisticos Carta 1: %i\n", numero_pontos_turisticos2);

    printf("Densidade Populacional Carta 1: %.2f\n", densidadePopulacional2);
    printf("PIB per Capita Carta 1: %.2f\n", pib_per_capita2);


    

    return 0;
}
