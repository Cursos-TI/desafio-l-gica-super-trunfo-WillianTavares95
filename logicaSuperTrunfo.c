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

    float densidadePopulacional1;
    float pib_per_capita1;
    
    // dados da segunda carta

    char estado2 [3];
    char codigoCarta2 [5];
    char nomeCidade2 [50]; // não deixar espaço em branco quando rodar o código " usar hífen" no nome da cidade
    
    unsigned long int populacao2;
    float area2;
    float pib2;
    int numero_pontos_turisticos2;

    float densidadePopulacional2;
    float pib_per_capita2;
    
    // lógica do jogo com switch
    int opcao;


    printf("*** Entrada de dados da Carta 1 ***\n");

    printf("Entre com o Estado:\n");
    scanf("%s", &estado1);

    printf("Entre com o Código Carta:\n");
    scanf("%s", &codigoCarta1);

    printf("Entre com o Nome da cidade:\n");
    scanf("%s", &nomeCidade1);

    printf("Entre com a população:\n");
    scanf("%lu", &populacao1);

    printf("Entre com a área Km²:\n");
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

    printf("Entre com a área Km²:\n");
    scanf("%f", &area2);

    printf("Entre com PIB:\n");
    scanf("%f", &pib2);

    printf("Entre com o ponto turistico:\n");
    scanf("%i", &numero_pontos_turisticos2);

    // parte de calculos 

    densidadePopulacional1 = (float) populacao1 / area1;
    pib_per_capita1 = (float) populacao1 / pib1;
    
    densidadePopulacional2 = (float) populacao2 / area2 ;
    pib_per_capita2 = (float) populacao2 / pib2;

    printf(" ########## ######### #######\n ");
    printf("*** Saída de dados Carta 1 ***\n");

    printf("Estado Carta 1: %s\n", estado1);
    printf("Código Carta 1: %s\n", codigoCarta1);
    printf("Nome da Cidade Carta 1: %s\n", nomeCidade1);
    printf("População Carta 1: %lu\n", populacao1);
    printf("Área Carta 1: %.2f Km²\n", area1);
    printf("PIB Carta 1 R$: %.2F Bilhões de reais\n", pib1);
    printf("Pontos Turisticos Carta 1: %i\n", numero_pontos_turisticos1);

    printf("Densidade Populacional Carta 1: %.2f Km²\n", densidadePopulacional1);
    printf("PIB per Capita Carta 1: %.2f Bilhões de reais\n", pib_per_capita1);

    // Saída de dados Carta 2
    printf(" ########## ######### ####### \n");
    printf("*** Saída de dados Carta 2 ***\n");

    printf("Estado Carta 1: %s\n", estado2);
    printf("Código Carta 1: %s\n", codigoCarta2);
    printf("Nome da Cidade Carta 1: %s\n", nomeCidade2);
    printf("População Carta 1: %lu\n", populacao2);
    printf("Área Carta 1: %.2f Km²\n", area2);
    printf("PIB Carta 1: R$: %.2f Bilhões de reais\n", pib2);
    printf("Pontos Turisticos Carta 1: %i\n", numero_pontos_turisticos2);

    printf("Densidade Populacional Carta 1: %.2f Km²\n", densidadePopulacional2);
    printf("PIB per Capita Carta 1: R$ %.2f Bilhões de reais\n", pib_per_capita2);


    // Lógica do jogo
    printf(" ########## ######### ####### \n");
    printf(" ###### Escolha o atributo para batalhar ######\n");
    printf("Atributo 1: População\n");
    printf("Atributo 2: Área\n");
    printf("Atributo 3: PIB\n");
    printf("Atributo 4: Pontos Turísticos\n");
    printf("Atributo 5: Densidade demográfica\n");
    scanf("%i", &opcao);


    switch (opcao) {
    
        case 1:
            printf(" ###### Comparação das Cartas ###### \n");
            printf("População Cidade: %s :  %lu\n",nomeCidade1, populacao1);
            printf("População Cidade: %s :  %lu\n",nomeCidade2, populacao2);
            break;

        case 2:
            printf(" ###### Comparação das Cartas ###### \n");
            printf("Área Cidade: %s : %.2f Km²\n",nomeCidade1, area1);
            printf("Área Cidade: %s : %.2f Km²\n",nomeCidade2, area2);
            break;

        case 3:
            printf(" ###### Comparação das Cartas ###### \n");
           printf("PIB Cidade: %s : R$%.2f bilhões de reais\n", nomeCidade1, pib1);
           printf("PIB Cidade: %s : R$%.2f bilhões de reais\n", nomeCidade2, pib2);
           break;
        
        case 4:
            printf(" ###### Comparação das Cartas ###### \n");
            printf("Pontos turísticos Cidade: %s: %i\n", nomeCidade1, numero_pontos_turisticos1);
            printf("Pontos turísticos Cidade: %s: %i\n", nomeCidade2, numero_pontos_turisticos2);
            break;

        case 5:
            printf(" ###### Comparação das Cartas ###### \n");
            printf("Densidade demográfica Cidade: %s : %.2f\n", nomeCidade1, densidadePopulacional1);
            printf("Densidade demográfica Cidade: %s : %.2f\n", nomeCidade2, densidadePopulacional2);
            break;

        default:
            printf(" Opção inválida\n");
            break;

    }

    
    if (populacao1 > populacao2) {
        printf(" ###### Resultado  da Batalha: ######\n");
        printf("População Cidade %s: %lu venceu !\n", nomeCidade1, populacao1);
    }
        else if (populacao1 < populacao2) {
            printf(" ###### Resultado  da Batalha: ######\n");
            printf("População Cidade %s : %lu venceu !\n", nomeCidade2, populacao2);
        }           
        else if (area1 > area2) {
            printf(" ###### Resultado  da Batalha: ######\n");
            printf("Área Cidade %s: %.2f Km² venceu !\n", nomeCidade1, area1);
        }     
        else if (area1 < area2) {
            printf(" ###### Resultado  da Batalha: ######\n");
            printf("Área Cidade %s : %.2f Km² venceu !\n", nomeCidade2, area2);
        }       
        else if (pib1 > pib2) {
            printf(" ###### Resultado  da Batalha: ######\n");
            printf("PIB Cidade %s: R$%.2f venceu !\n", nomeCidade1, pib1);
            }  
        
        else if (pib1 < pib2) {
            printf(" ###### Resultado  da Batalha: ######\n");
            printf("PIB Cidade %s : R$%.2f venceu !\n", nomeCidade2, pib2);
            }
        else if (numero_pontos_turisticos1 > numero_pontos_turisticos2) {
            printf(" ###### Resultado  da Batalha: ######\n");
            printf("Número de pontos turísticos %s: %i venceu !\n", nomeCidade1, numero_pontos_turisticos1);
            }     
        else if (numero_pontos_turisticos1 < numero_pontos_turisticos2) {
                printf(" ###### Resultado  da Batalha: ######\n");
                printf("Número de pontos turísticos %s : %i Km² venceu !\n", nomeCidade2, numero_pontos_turisticos2);
        }
        else if (densidadePopulacional1 > densidadePopulacional2) {
            printf(" ###### Resultado  da Batalha: ######\n");
            printf("Densidade demográfica %s: R$%.2f venceu !\n", nomeCidade2, densidadePopulacional2);
            }     
        else if (densidadePopulacional2 > densidadePopulacional1) {
                printf(" ###### Resultado  da Batalha: ######\n");
                printf("Densidade demográfica %s : %.2f venceu !\n", nomeCidade1, densidadePopulacional1);
            }
            else {
                printf(" #### Houve um empate! ####\n");
            }
    
                    
                    
        

    return 0;
}
