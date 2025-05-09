
#include <stdio.h>
#include <stdlib.h>



int main (){

   // Variaveis do jogo:
    char nomeCidadeA [15]; 
    char nomeCidadeB [15]; 
    unsigned long int populacaoA, populacaoB;
    float areaA, areaB;
    float pibA, pibB;
    int pontos_turisticosA, pontos_turisticosB;
    float densidadePopulacionalA ,densidadePopulacionalB;   
    float pib_per_capitaA, pib_per_capitaB;

    int opcao1, opcao2, opcao3, opcao4, opcao5, opcao6;
    unsigned long int resultadoA, resultadoB;
    char jogadorA [20];
    char jogadorB [20];

    // interação com usuario.
    printf(" ### Seja bem-vindo ao jogo Super trunfo! ###\n");
    // Criar um nome para primeiro jodor
    printf("Escolha o nome para jogadorA:\n");
    scanf("%s", &jogadorA);
    // Criar um nome para segundo jogador
    printf("Escolha o nome para jogadorB:\n");
    scanf("%s", &jogadorB);

    printf(" ##### Seja bem vindo a primeira rodada #####\n");
    printf("Escolha os atributos para batalhar:\n");

    printf("1. População:\n");
    printf("2. Área:\n");
    printf("3. PIB:\n");
    printf("4. Pontos turísticos:\n");
    printf("5. Densidade Populacional:\n");
    printf("6. PIB per capita:\n");

    printf("Digite o número do atributo escolhido ?\n");
    scanf("%i", &opcao1);

switch (opcao1) {
case 1:

    //Atributos da primeria carta;
    printf(" ### Entre com o nome da cidade de sua carta %s, nome da cidade sem espaço : ### \n", jogadorA); 
    scanf("%s", &nomeCidadeA);
    printf(" ### Digite a população da sua carta %s: ### \n", jogadorA);
    scanf("%lu", &populacaoA);
    
    //Atributos da segunda carta;
    printf(" ### Entre com o nome da cidade de sua carta %s, nome da cidade sem espaço : ### \n", jogadorB); 
    scanf("%s", &nomeCidadeB);
    printf(" ### Digite a população da sua carta %s: ### \n", jogadorB);
    scanf("%lu", &populacaoB);

    //Comparação dos Atributos;    
    printf(" ##### Comparação dos atributos #####\n");
    printf("Jogador %s, Cidade: %s, população: %lu\n", jogadorA, nomeCidadeA, populacaoA);
    printf("Jogador %s, Cidade: %s, população: %lu\n", jogadorB, nomeCidadeB, populacaoB);

    //operador ternario:
    resultadoA = populacaoA > populacaoB ? 1 : 0;
    resultadoB = populacaoB > populacaoA ? 1 : 0;

    //lógica do jogo.
    if (resultadoA) {
        printf("Vencedor rodada %s,  cidade: %s população: %lu parabens\n",  jogadorA, nomeCidadeA, populacaoA);        
    } else if (resultadoB) {
        printf("Vencedor rodada %s,  cidade: %s  população: %lu parabens\n", jogadorB, nomeCidadeB, populacaoB);        
    } else {
        printf("Deu empate!\n");
    }
    break;

case 2:
    
    printf(" ### Entre com o nome da cidade de sua carta %s, nome da cidade sem espaço : ### \n", jogadorA); 
    scanf("%s", &nomeCidadeA);

    printf("Digite a Área em Km² da sua carta %s:\n", jogadorA, areaA);
    scanf("%f", &areaA);
        
    printf(" ### Entre com o nome da cidade de sua carta: %s, nome da cidade sem espaço : ### \n", jogadorB); 
    scanf("%s", &nomeCidadeB);

    printf("Digite a Área em Km² da sua carta %s:\n", jogadorB, areaB);
    scanf("%f", &areaB);
        
    printf(" ##### Comparação dos atributos #####\n");
    printf("Jogador %s, Cidade: %s, Área: %f Km²\n", jogadorA, nomeCidadeA, areaA);
    printf("Jogador %s, Cidade: %s, Área: %f Km²\n", jogadorB, nomeCidadeB, areaB);   
    
    resultadoA = areaA > areaB ? 1 : 0;
    resultadoB = areaB > areaA ? 1 : 0;
    
    if (resultadoA) {
        printf("Vencedor rodada %s,  cidade: %s Área: %f Km² parabens\n",  jogadorA, nomeCidadeA, areaA);        
    } else if (resultadoB) {
        printf("Vencedor rodada %s,  cidade: %s  Área: %f Km² parabens\n", jogadorB, nomeCidadeB, areaB);        
    } else {
        printf("Deu empate!\n");
    }
    break;

case 3:

    printf(" ### Entre com o nome da cidade de sua carta %s, nome da cidade sem espaço : ### \n", jogadorA); 
    scanf("%s", &nomeCidadeA);

    printf(" ### Digite o PIB da sua carta %s: ### \n", jogadorA);
    scanf("%f", &pibA);

    printf(" ### Entre com o nome da cidade de sua carta %s, nome da cidade sem espaço : ### \n", jogadorB); 
    scanf("%s", &nomeCidadeB);

    printf(" ### Digite a PIB da sua carta %s: ### \n", jogadorB);
    scanf("%f", &pibB);

    printf(" ##### Comparação dos atributos #####\n");
    printf("Jogador %s, Cidade: %s, PIB R$: %f bilhões de reais\n", jogadorA, nomeCidadeA, pibA);
    printf("Jogador %s, Cidade: %s, PIB R$: %f bilhões de reais\n", jogadorB, nomeCidadeB, pibB);

    resultadoA = pibA > pibB ? 1 : 0;
    resultadoB = pibB > pibA ? 1 : 0;

    if (resultadoA) {
        printf("Vencedor rodada %s,  cidade: %s PIB R$: %f bilhões de reais parabens\n",  jogadorA, nomeCidadeA, pibA);        
    } else if (resultadoB) {
        printf("Vencedor rodada %s,  cidade: %s PIB R$:: %f bilhões de reais parabens\n", jogadorB, nomeCidadeB, pibB);        
    } else {
        printf("Deu empate!\n");
    }
    break;

    case 4:

    printf(" ### Entre com o nome da cidade de sua carta %s, nome da cidade sem espaço : ### \n", jogadorA); 
    scanf("%s", &nomeCidadeA);

    printf(" ### Digite a quantidade de pontos turisticos: %s: ### \n", jogadorA);
    scanf("%i", &pontos_turisticosA);
    
    //Atributos da segunda carta;
    printf(" ### Entre com o nome da cidade de sua carta %s, nome da cidade sem espaço : ### \n", jogadorB); 
    scanf("%s", &nomeCidadeB);

    printf(" ### Digite a quantidade de pontos turisticos: %s: ### \n", jogadorB);
    scanf("%i", &pontos_turisticosB);

    printf(" ##### Comparação dos atributos #####\n");
    printf("Jogador %s, Cidade: %s, quantidade de pontos turisticos: %i\n", jogadorA, nomeCidadeA, pontos_turisticosA);
    printf("Jogador %s, Cidade: %s, quantidade de pontos turisticos: %i\n", jogadorB, nomeCidadeB, pontos_turisticosB);

    resultadoA = pontos_turisticosA > pontos_turisticosB ? 1 : 0;
    resultadoB = pontos_turisticosB > pontos_turisticosA ? 1 : 0;

    if (resultadoA) {
        printf("Vencedor rodada %s,  cidade: %s quantidade de pontos turisticos: %i parabens\n",  jogadorA, nomeCidadeA, pontos_turisticosA);        
    } else if (resultadoB) {
        printf("Vencedor rodada %s,  cidade: %s quantidade de pontos turisticos: %i parabens\n", jogadorB, nomeCidadeB, pontos_turisticosB);        
    } else {
        printf("Deu empate!\n");
    }
    break;

case 5:
    //densidade populacional
    printf(" ### Entre com o nome da cidade de sua carta %s, nome da cidade sem espaço : ### \n", jogadorA); 
    scanf("%s", &nomeCidadeA);

    printf(" ### Digite a população da sua carta %s: ### \n", jogadorA);
    scanf("%lu", &populacaoA);

    printf("Digite a Área em Km² da sua carta %s:\n", jogadorA, areaA);
    scanf("%f", &areaA);

    printf(" ### Entre com o nome da cidade de sua carta %s, nome da cidade sem espaço : ### \n", jogadorB); 
    scanf("%s", &nomeCidadeB);

    printf(" ### Digite a população da sua carta %s: ### \n", jogadorB);
    scanf("%lu", &populacaoB);

    printf("Digite a Área em Km² da sua carta %s:\n", jogadorB, areaB);
    scanf("%f", &areaB);
   
    densidadePopulacionalA = (float) populacaoA / areaA;
    densidadePopulacionalB = (float) populacaoB / areaB;

    printf(" ##### Comparação dos atributos #####\n");
    printf("Jogador %s, Cidade: %s, densidade populacional: %f hab/Km²\n", jogadorA, nomeCidadeA, densidadePopulacionalA);
    printf("Jogador %s, Cidade: %s, densidade populacional: %f hab/Km²\n", jogadorB, nomeCidadeB, densidadePopulacionalB);

    resultadoA = densidadePopulacionalA < densidadePopulacionalB ? 1 : 0;
    resultadoB = densidadePopulacionalB < densidadePopulacionalA ? 1 : 0;

    if (resultadoA) {
        printf("Vencedor rodada %s,  cidade: %s densidade populacional: %f hab/Km² parabens\n",  jogadorA, nomeCidadeA, densidadePopulacionalA);        
    } else if (resultadoB) {
        printf("Vencedor rodada %s,  cidade: %s densidade populacional: %f hab/Km² parabens\n", jogadorB, nomeCidadeB, densidadePopulacionalB);        
    } else {
        printf("Deu empate!\n");
    }
    break;


    case 6:
    //pib per capita
    // Jogador 1
    printf(" ### Entre com o nome da cidade de sua carta %s, nome da cidade sem espaço : ### \n", jogadorA); 
    scanf("%s", &nomeCidadeA);

    printf(" ### Digite a população da sua carta %s: ### \n", jogadorA);
    scanf("%lu", &populacaoA);

    printf(" ### Digite o PIB da sua carta %s: ### \n", jogadorA);
    scanf("%f", &pibA);
     //Jogador 2
    printf(" ### Entre com o nome da cidade de sua carta %s, nome da cidade sem espaço : ### \n", jogadorB); 
    scanf("%s", &nomeCidadeB);

    printf(" ### Digite a população da sua carta %s: ### \n", jogadorB);
    scanf("%lu", &populacaoB);

    printf(" ### Digite a PIB da sua carta %s: ### \n", jogadorB);
    scanf("%f", &pibB);

    pib_per_capitaA = (float) populacaoA / pibA;
    pib_per_capitaB = (float) populacaoB / pibB;


    printf(" ##### Comparação dos atributos #####\n");
    printf("Jogador %s, Cidade: %s, PIB per Capita R$: %f Reais\n", jogadorA, nomeCidadeA, pib_per_capitaA);
    printf("Jogador %s, Cidade: %s, PIB per Capita R$: %f Reais\n", jogadorB, nomeCidadeB, pib_per_capitaB);

    resultadoA = pib_per_capitaA > pib_per_capitaB ? 1 : 0;
    resultadoB = pib_per_capitaB > pib_per_capitaA ? 1 : 0;

    if (resultadoA) {
        printf("Vencedor rodada %s,  cidade: %s PIB per Capita R$: %f Reais parabens\n",  jogadorA, nomeCidadeA, pib_per_capitaA);        
    } else if (resultadoB) {
        printf("Vencedor rodada %s,  cidade: %s PIB per Capita R$: %f Reais parabens\n", jogadorB, nomeCidadeB, pib_per_capitaB);        
    } else {
        printf("Deu empate!\n");
    }
    break;
}

    printf(" ###### Seja bem vindo a segunda rodada #####\n");
    printf("Escolha os atributos para batalhar:\n");

    printf("1. População:\n");
    printf("2. Área:\n");
    printf("3. PIB:\n");
    printf("4. Pontos turísticos:\n");
    printf("5. Densidade Populacional:\n");
    printf("6. PIB per capita:\n");

    printf("Digite o número do atributo escolhido ?\n");
    scanf("%i", &opcao2);


    if (opcao1 == opcao2) {
        printf("Escolha o atributo diferente, não pode ser repedito !\n");
        printf("Retorne ao menu inicial:\n");
    }   else { switch (opcao2)
    {
    case 1:
    
     //Atributos da primeria carta;
     printf(" ### Entre com o nome da cidade de sua carta %s, nome da cidade sem espaço : ### \n", jogadorA); 
     scanf("%s", &nomeCidadeA);
     printf(" ### Digite a população da sua carta %s: ### \n", jogadorA);
     scanf("%lu", &populacaoA);
     
     //Atributos da segunda carta;
     printf(" ### Entre com o nome da cidade de sua carta %s, nome da cidade sem espaço : ### \n", jogadorB); 
     scanf("%s", &nomeCidadeB);
     printf(" ### Digite a população da sua carta %s: ### \n", jogadorB);
     scanf("%lu", &populacaoB);
 
     //Comparação dos Atributos;    
     printf(" ##### Comparação dos atributos #####\n");
     printf("Jogador %s, Cidade: %s, população: %lu\n", jogadorA, nomeCidadeA, populacaoA);
     printf("Jogador %s, Cidade: %s, população: %lu\n", jogadorB, nomeCidadeB, populacaoB);
 
     //operador ternario:
     resultadoA = populacaoA > populacaoB ? 1 : 0;
     resultadoB = populacaoB > populacaoA ? 1 : 0;
 
     //lógica do jogo.
     if (resultadoA) {
         printf("Vencedor rodada %s,  cidade: %s população: %lu parabens\n",  jogadorA, nomeCidadeA, populacaoA);        
     } else if (resultadoB) {
         printf("Vencedor rodada %s,  cidade: %s  população: %lu parabens\n", jogadorB, nomeCidadeB, populacaoB);        
     } else {
         printf("Deu empate!\n");
     }
     break;
 
 case 2:
     
     printf(" ### Entre com o nome da cidade de sua carta %s, nome da cidade sem espaço : ### \n", jogadorA); 
     scanf("%s", &nomeCidadeA);
 
     printf("Digite a Área em Km² da sua carta %s:\n", jogadorA, areaA);
     scanf("%f", &areaA);
         
     printf(" ### Entre com o nome da cidade de sua carta: %s, nome da cidade sem espaço : ### \n", jogadorB); 
     scanf("%s", &nomeCidadeB);
 
     printf("Digite a Área em Km² da sua carta %s:\n", jogadorB, areaB);
     scanf("%f", &areaB);
         
     printf(" ##### Comparação dos atributos #####\n");
     printf("Jogador %s, Cidade: %s, Área: %f Km²\n", jogadorA, nomeCidadeA, areaA);
     printf("Jogador %s, Cidade: %s, Área: %f Km²\n", jogadorB, nomeCidadeB, areaB);   
     
     resultadoA = areaA > areaB ? 1 : 0;
     resultadoB = areaB > areaA ? 1 : 0;
     
     if (resultadoA) {
         printf("Vencedor rodada %s,  cidade: %s Área: %f Km² parabens\n",  jogadorA, nomeCidadeA, areaA);        
     } else if (resultadoB) {
         printf("Vencedor rodada %s,  cidade: %s  Área: %f Km² parabens\n", jogadorB, nomeCidadeB, areaB);        
     } else {
         printf("Deu empate!\n");
     }
     break;
 
 case 3:
 
     printf(" ### Entre com o nome da cidade de sua carta %s, nome da cidade sem espaço : ### \n", jogadorA); 
     scanf("%s", &nomeCidadeA);
 
     printf(" ### Digite o PIB da sua carta %s: ### \n", jogadorA);
     scanf("%f", &pibA);
 
     printf(" ### Entre com o nome da cidade de sua carta %s, nome da cidade sem espaço : ### \n", jogadorB); 
     scanf("%s", &nomeCidadeB);
 
     printf(" ### Digite a PIB da sua carta %s: ### \n", jogadorB);
     scanf("%f", &pibB);
 
     printf(" ##### Comparação dos atributos #####\n");
     printf("Jogador %s, Cidade: %s, PIB R$: %f bilhões de reais\n", jogadorA, nomeCidadeA, pibA);
     printf("Jogador %s, Cidade: %s, PIB R$: %f bilhões de reais\n", jogadorB, nomeCidadeB, pibB);
 
     resultadoA = pibA > pibB ? 1 : 0;
     resultadoB = pibB > pibA ? 1 : 0;
 
     if (resultadoA) {
         printf("Vencedor rodada %s,  cidade: %s PIB R$: %f bilhões de reais parabens\n",  jogadorA, nomeCidadeA, pibA);        
     } else if (resultadoB) {
         printf("Vencedor rodada %s,  cidade: %s PIB R$:: %f bilhões de reais parabens\n", jogadorB, nomeCidadeB, pibB);        
     } else {
         printf("Deu empate!\n");
     }
     break;
 
     case 4:
 
     printf(" ### Entre com o nome da cidade de sua carta %s, nome da cidade sem espaço : ### \n", jogadorA); 
     scanf("%s", &nomeCidadeA);
 
     printf(" ### Digite a quantidade de pontos turisticos: %s: ### \n", jogadorA);
     scanf("%i", &pontos_turisticosA);
     
     //Atributos da segunda carta;
     printf(" ### Entre com o nome da cidade de sua carta %s, nome da cidade sem espaço : ### \n", jogadorB); 
     scanf("%s", &nomeCidadeB);
 
     printf(" ### Digite a quantidade de pontos turisticos: %s: ### \n", jogadorB);
     scanf("%i", &pontos_turisticosB);
 
     printf(" ##### Comparação dos atributos #####\n");
     printf("Jogador %s, Cidade: %s, quantidade de pontos turisticos: %i\n", jogadorA, nomeCidadeA, pontos_turisticosA);
     printf("Jogador %s, Cidade: %s, quantidade de pontos turisticos: %i\n", jogadorB, nomeCidadeB, pontos_turisticosB);
 
     resultadoA = pontos_turisticosA > pontos_turisticosB ? 1 : 0;
     resultadoB = pontos_turisticosB > pontos_turisticosA ? 1 : 0;
 
     if (resultadoA) {
         printf("Vencedor rodada %s,  cidade: %s quantidade de pontos turisticos: %i parabens\n",  jogadorA, nomeCidadeA, pontos_turisticosA);        
     } else if (resultadoB) {
         printf("Vencedor rodada %s,  cidade: %s quantidade de pontos turisticos: %i parabens\n", jogadorB, nomeCidadeB, pontos_turisticosB);        
     } else {
         printf("Deu empate!\n");
     }
     break;
 
 case 5:
     //densidade populacional
     printf(" ### Entre com o nome da cidade de sua carta %s, nome da cidade sem espaço : ### \n", jogadorA); 
     scanf("%s", &nomeCidadeA);
 
     printf(" ### Digite a população da sua carta %s: ### \n", jogadorA);
     scanf("%lu", &populacaoA);
 
     printf("Digite a Área em Km² da sua carta %s:\n", jogadorA, areaA);
     scanf("%f", &areaA);
 
     printf(" ### Entre com o nome da cidade de sua carta %s, nome da cidade sem espaço : ### \n", jogadorB); 
     scanf("%s", &nomeCidadeB);
 
     printf(" ### Digite a população da sua carta %s: ### \n", jogadorB);
     scanf("%lu", &populacaoB);
 
     printf("Digite a Área em Km² da sua carta %s:\n", jogadorB, areaB);
     scanf("%f", &areaB);
    
     densidadePopulacionalA = (float) populacaoA / areaA;
     densidadePopulacionalB = (float) populacaoB / areaB;
 
     printf(" ##### Comparação dos atributos #####\n");
     printf("Jogador %s, Cidade: %s, densidade populacional: %f hab/Km²\n", jogadorA, nomeCidadeA, densidadePopulacionalA);
     printf("Jogador %s, Cidade: %s, densidade populacional: %f hab/Km²\n", jogadorB, nomeCidadeB, densidadePopulacionalB);
 
     resultadoA = densidadePopulacionalA < densidadePopulacionalB ? 1 : 0;
     resultadoB = densidadePopulacionalB < densidadePopulacionalA ? 1 : 0;
 
     if (resultadoA) {
         printf("Vencedor rodada %s,  cidade: %s densidade populacional: %f hab/Km² parabens\n",  jogadorA, nomeCidadeA, densidadePopulacionalA);        
     } else if (resultadoB) {
         printf("Vencedor rodada %s,  cidade: %s densidade populacional: %f hab/Km² parabens\n", jogadorB, nomeCidadeB, densidadePopulacionalB);        
     } else {
         printf("Deu empate!\n");
     }
     break;
 
 
     case 6:
     //pib per capita
     // Jogador 1
     printf(" ### Entre com o nome da cidade de sua carta %s, nome da cidade sem espaço : ### \n", jogadorA); 
     scanf("%s", &nomeCidadeA);
 
     printf(" ### Digite a população da sua carta %s: ### \n", jogadorA);
     scanf("%lu", &populacaoA);
 
     printf(" ### Digite o PIB da sua carta %s: ### \n", jogadorA);
     scanf("%f", &pibA);
      //Jogador 2
     printf(" ### Entre com o nome da cidade de sua carta %s, nome da cidade sem espaço : ### \n", jogadorB); 
     scanf("%s", &nomeCidadeB);
 
     printf(" ### Digite a população da sua carta %s: ### \n", jogadorB);
     scanf("%lu", &populacaoB);
 
     printf(" ### Digite a PIB da sua carta %s: ### \n", jogadorB);
     scanf("%f", &pibB);
 
     pib_per_capitaA = (float) populacaoA / pibA;
     pib_per_capitaB = (float) populacaoB / pibB;
 
 
     printf(" ##### Comparação dos atributos #####\n");
     printf("Jogador %s, Cidade: %s, PIB per Capita R$: %f Reais\n", jogadorA, nomeCidadeA, pib_per_capitaA);
     printf("Jogador %s, Cidade: %s, PIB per Capita R$: %f Reais\n", jogadorB, nomeCidadeB, pib_per_capitaB);
 
     resultadoA = pib_per_capitaA > pib_per_capitaB ? 1 : 0;
     resultadoB = pib_per_capitaB > pib_per_capitaA ? 1 : 0;
 
     if (resultadoA) {
         printf("Vencedor rodada %s,  cidade: %s PIB per Capita R$: %f Reais parabens\n",  jogadorA, nomeCidadeA, pib_per_capitaA);        
     } else if (resultadoB) {
         printf("Vencedor rodada %s,  cidade: %s PIB per Capita R$: %f Reais parabens\n", jogadorB, nomeCidadeB, pib_per_capitaB);        
     } else {
         printf("Deu empate!\n");
     }
     break;

    }}

    printf(" ###### Seja bem vindo a terceira rodada #####\n");
    printf("Escolha os atributos para batalhar:\n");

    printf("1. População:\n");
    printf("2. Área:\n");
    printf("3. PIB:\n");
    printf("4. Pontos turísticos:\n");
    printf("5. Densidade Populacional:\n");
    printf("6. PIB per capita:\n");

    printf("Digite o número do atributo escolhido ?\n");
    scanf("%i", &opcao3);


    if (opcao1 == opcao2 == opcao3) {
        printf("Escolha o atributo diferente, não pode ser repedito !\n");
        printf("Retorne ao menu inicial:\n");
    } else { switch (opcao3)
    {
    case 1:
    
     //Atributos da primeria carta;
     printf(" ### Entre com o nome da cidade de sua carta %s, nome da cidade sem espaço : ### \n", jogadorA); 
     scanf("%s", &nomeCidadeA);
     printf(" ### Digite a população da sua carta %s: ### \n", jogadorA);
     scanf("%lu", &populacaoA);
     
     //Atributos da segunda carta;
     printf(" ### Entre com o nome da cidade de sua carta %s, nome da cidade sem espaço : ### \n", jogadorB); 
     scanf("%s", &nomeCidadeB);
     printf(" ### Digite a população da sua carta %s: ### \n", jogadorB);
     scanf("%lu", &populacaoB);
 
     //Comparação dos Atributos;    
     printf(" ##### Comparação dos atributos #####\n");
     printf("Jogador %s, Cidade: %s, população: %lu\n", jogadorA, nomeCidadeA, populacaoA);
     printf("Jogador %s, Cidade: %s, população: %lu\n", jogadorB, nomeCidadeB, populacaoB);
 
     //operador ternario:
     resultadoA = populacaoA > populacaoB ? 1 : 0;
     resultadoB = populacaoB > populacaoA ? 1 : 0;
 
     //lógica do jogo.
     if (resultadoA) {
         printf("Vencedor rodada %s,  cidade: %s população: %lu parabens\n",  jogadorA, nomeCidadeA, populacaoA);        
     } else if (resultadoB) {
         printf("Vencedor rodada %s,  cidade: %s  população: %lu parabens\n", jogadorB, nomeCidadeB, populacaoB);        
     } else {
         printf("Deu empate!\n");
     }
     break;
 
 case 2:
     
     printf(" ### Entre com o nome da cidade de sua carta %s, nome da cidade sem espaço : ### \n", jogadorA); 
     scanf("%s", &nomeCidadeA);
 
     printf("Digite a Área em Km² da sua carta %s:\n", jogadorA, areaA);
     scanf("%f", &areaA);
         
     printf(" ### Entre com o nome da cidade de sua carta: %s, nome da cidade sem espaço : ### \n", jogadorB); 
     scanf("%s", &nomeCidadeB);
 
     printf("Digite a Área em Km² da sua carta %s:\n", jogadorB, areaB);
     scanf("%f", &areaB);
         
     printf(" ##### Comparação dos atributos #####\n");
     printf("Jogador %s, Cidade: %s, Área: %f Km²\n", jogadorA, nomeCidadeA, areaA);
     printf("Jogador %s, Cidade: %s, Área: %f Km²\n", jogadorB, nomeCidadeB, areaB);   
     
     resultadoA = areaA > areaB ? 1 : 0;
     resultadoB = areaB > areaA ? 1 : 0;
     
     if (resultadoA) {
         printf("Vencedor rodada %s,  cidade: %s Área: %f Km² parabens\n",  jogadorA, nomeCidadeA, areaA);        
     } else if (resultadoB) {
         printf("Vencedor rodada %s,  cidade: %s  Área: %f Km² parabens\n", jogadorB, nomeCidadeB, areaB);        
     } else {
         printf("Deu empate!\n");
     }
     break;
 
 case 3:
 
     printf(" ### Entre com o nome da cidade de sua carta %s, nome da cidade sem espaço : ### \n", jogadorA); 
     scanf("%s", &nomeCidadeA);
 
     printf(" ### Digite o PIB da sua carta %s: ### \n", jogadorA);
     scanf("%f", &pibA);
 
     printf(" ### Entre com o nome da cidade de sua carta %s, nome da cidade sem espaço : ### \n", jogadorB); 
     scanf("%s", &nomeCidadeB);
 
     printf(" ### Digite a PIB da sua carta %s: ### \n", jogadorB);
     scanf("%f", &pibB);
 
     printf(" ##### Comparação dos atributos #####\n");
     printf("Jogador %s, Cidade: %s, PIB R$: %f bilhões de reais\n", jogadorA, nomeCidadeA, pibA);
     printf("Jogador %s, Cidade: %s, PIB R$: %f bilhões de reais\n", jogadorB, nomeCidadeB, pibB);
 
     resultadoA = pibA > pibB ? 1 : 0;
     resultadoB = pibB > pibA ? 1 : 0;
 
     if (resultadoA) {
         printf("Vencedor rodada %s,  cidade: %s PIB R$: %f bilhões de reais parabens\n",  jogadorA, nomeCidadeA, pibA);        
     } else if (resultadoB) {
         printf("Vencedor rodada %s,  cidade: %s PIB R$:: %f bilhões de reais parabens\n", jogadorB, nomeCidadeB, pibB);        
     } else {
         printf("Deu empate!\n");
     }
     break;
 
     case 4:
 
     printf(" ### Entre com o nome da cidade de sua carta %s, nome da cidade sem espaço : ### \n", jogadorA); 
     scanf("%s", &nomeCidadeA);
 
     printf(" ### Digite a quantidade de pontos turisticos: %s: ### \n", jogadorA);
     scanf("%i", &pontos_turisticosA);
     
     //Atributos da segunda carta;
     printf(" ### Entre com o nome da cidade de sua carta %s, nome da cidade sem espaço : ### \n", jogadorB); 
     scanf("%s", &nomeCidadeB);
 
     printf(" ### Digite a quantidade de pontos turisticos: %s: ### \n", jogadorB);
     scanf("%i", &pontos_turisticosB);
 
     printf(" ##### Comparação dos atributos #####\n");
     printf("Jogador %s, Cidade: %s, quantidade de pontos turisticos: %i\n", jogadorA, nomeCidadeA, pontos_turisticosA);
     printf("Jogador %s, Cidade: %s, quantidade de pontos turisticos: %i\n", jogadorB, nomeCidadeB, pontos_turisticosB);
 
     resultadoA = pontos_turisticosA > pontos_turisticosB ? 1 : 0;
     resultadoB = pontos_turisticosB > pontos_turisticosA ? 1 : 0;
 
     if (resultadoA) {
         printf("Vencedor rodada %s,  cidade: %s quantidade de pontos turisticos: %i parabens\n",  jogadorA, nomeCidadeA, pontos_turisticosA);        
     } else if (resultadoB) {
         printf("Vencedor rodada %s,  cidade: %s quantidade de pontos turisticos: %i parabens\n", jogadorB, nomeCidadeB, pontos_turisticosB);        
     } else {
         printf("Deu empate!\n");
     }
     break;
 
 case 5:
     //densidade populacional
     printf(" ### Entre com o nome da cidade de sua carta %s, nome da cidade sem espaço : ### \n", jogadorA); 
     scanf("%s", &nomeCidadeA);
 
     printf(" ### Digite a população da sua carta %s: ### \n", jogadorA);
     scanf("%lu", &populacaoA);
 
     printf("Digite a Área em Km² da sua carta %s:\n", jogadorA, areaA);
     scanf("%f", &areaA);
 
     printf(" ### Entre com o nome da cidade de sua carta %s, nome da cidade sem espaço : ### \n", jogadorB); 
     scanf("%s", &nomeCidadeB);
 
     printf(" ### Digite a população da sua carta %s: ### \n", jogadorB);
     scanf("%lu", &populacaoB);
 
     printf("Digite a Área em Km² da sua carta %s:\n", jogadorB, areaB);
     scanf("%f", &areaB);
    
     densidadePopulacionalA = (float) populacaoA / areaA;
     densidadePopulacionalB = (float) populacaoB / areaB;
 
     printf(" ##### Comparação dos atributos #####\n");
     printf("Jogador %s, Cidade: %s, densidade populacional: %f hab/Km²\n", jogadorA, nomeCidadeA, densidadePopulacionalA);
     printf("Jogador %s, Cidade: %s, densidade populacional: %f hab/Km²\n", jogadorB, nomeCidadeB, densidadePopulacionalB);
 
     resultadoA = densidadePopulacionalA < densidadePopulacionalB ? 1 : 0;
     resultadoB = densidadePopulacionalB < densidadePopulacionalA ? 1 : 0;
 
     if (resultadoA) {
         printf("Vencedor rodada %s,  cidade: %s densidade populacional: %f hab/Km² parabens\n",  jogadorA, nomeCidadeA, densidadePopulacionalA);        
     } else if (resultadoB) {
         printf("Vencedor rodada %s,  cidade: %s densidade populacional: %f hab/Km² parabens\n", jogadorB, nomeCidadeB, densidadePopulacionalB);        
     } else {
         printf("Deu empate!\n");
     }
     break;
 
 
     case 6:
     //pib per capita
     // Jogador 1
     printf(" ### Entre com o nome da cidade de sua carta %s, nome da cidade sem espaço : ### \n", jogadorA); 
     scanf("%s", &nomeCidadeA);
 
     printf(" ### Digite a população da sua carta %s: ### \n", jogadorA);
     scanf("%lu", &populacaoA);
 
     printf(" ### Digite o PIB da sua carta %s: ### \n", jogadorA);
     scanf("%f", &pibA);
      //Jogador 2
     printf(" ### Entre com o nome da cidade de sua carta %s, nome da cidade sem espaço : ### \n", jogadorB); 
     scanf("%s", &nomeCidadeB);
 
     printf(" ### Digite a população da sua carta %s: ### \n", jogadorB);
     scanf("%lu", &populacaoB);
 
     printf(" ### Digite a PIB da sua carta %s: ### \n", jogadorB);
     scanf("%f", &pibB);
 
     pib_per_capitaA = (float) populacaoA / pibA;
     pib_per_capitaB = (float) populacaoB / pibB;
 
 
     printf(" ##### Comparação dos atributos #####\n");
     printf("Jogador %s, Cidade: %s, PIB per Capita R$: %f Reais\n", jogadorA, nomeCidadeA, pib_per_capitaA);
     printf("Jogador %s, Cidade: %s, PIB per Capita R$: %f Reais\n", jogadorB, nomeCidadeB, pib_per_capitaB);
 
     resultadoA = pib_per_capitaA > pib_per_capitaB ? 1 : 0;
     resultadoB = pib_per_capitaB > pib_per_capitaA ? 1 : 0;
 
     if (resultadoA) {
         printf("Vencedor rodada %s,  cidade: %s PIB per Capita R$: %f Reais parabens\n",  jogadorA, nomeCidadeA, pib_per_capitaA);        
     } else if (resultadoB) {
         printf("Vencedor rodada %s,  cidade: %s PIB per Capita R$: %f Reais parabens\n", jogadorB, nomeCidadeB, pib_per_capitaB);        
     } else {
         printf("Deu empate!\n");
     }
     break;
    }}


    printf(" ###### Seja bem vindo a quarta rodada #####\n");
    printf("Escolha os atributos para batalhar:\n");

    printf("1. População:\n");
    printf("2. Área:\n");
    printf("3. PIB:\n");
    printf("4. Pontos turísticos:\n");
    printf("5. Densidade Populacional:\n");
    printf("6. PIB per capita:\n");

    printf("Digite o número do atributo escolhido ?\n");
    scanf("%i", &opcao4);


    if (opcao1 == opcao2 == opcao3 == opcao4) {
        printf("Escolha o atributo diferente, não pode ser repedito !\n");
        printf("Retorne ao menu inicial:\n");
    } else { switch (opcao4)
    {
    case 1:
    
     //Atributos da primeria carta;
     printf(" ### Entre com o nome da cidade de sua carta %s, nome da cidade sem espaço : ### \n", jogadorA); 
     scanf("%s", &nomeCidadeA);
     printf(" ### Digite a população da sua carta %s: ### \n", jogadorA);
     scanf("%lu", &populacaoA);
     
     //Atributos da segunda carta;
     printf(" ### Entre com o nome da cidade de sua carta %s, nome da cidade sem espaço : ### \n", jogadorB); 
     scanf("%s", &nomeCidadeB);
     printf(" ### Digite a população da sua carta %s: ### \n", jogadorB);
     scanf("%lu", &populacaoB);
 
     //Comparação dos Atributos;    
     printf(" ##### Comparação dos atributos #####\n");
     printf("Jogador %s, Cidade: %s, população: %lu\n", jogadorA, nomeCidadeA, populacaoA);
     printf("Jogador %s, Cidade: %s, população: %lu\n", jogadorB, nomeCidadeB, populacaoB);
 
     //operador ternario:
     resultadoA = populacaoA > populacaoB ? 1 : 0;
     resultadoB = populacaoB > populacaoA ? 1 : 0;
 
     //lógica do jogo.
     if (resultadoA) {
         printf("Vencedor rodada %s,  cidade: %s população: %lu parabens\n",  jogadorA, nomeCidadeA, populacaoA);        
     } else if (resultadoB) {
         printf("Vencedor rodada %s,  cidade: %s  população: %lu parabens\n", jogadorB, nomeCidadeB, populacaoB);        
     } else {
         printf("Deu empate!\n");
     }
     break;
 
 case 2:
     
     printf(" ### Entre com o nome da cidade de sua carta %s, nome da cidade sem espaço : ### \n", jogadorA); 
     scanf("%s", &nomeCidadeA);
 
     printf("Digite a Área em Km² da sua carta %s:\n", jogadorA, areaA);
     scanf("%f", &areaA);
         
     printf(" ### Entre com o nome da cidade de sua carta: %s, nome da cidade sem espaço : ### \n", jogadorB); 
     scanf("%s", &nomeCidadeB);
 
     printf("Digite a Área em Km² da sua carta %s:\n", jogadorB, areaB);
     scanf("%f", &areaB);
         
     printf(" ##### Comparação dos atributos #####\n");
     printf("Jogador %s, Cidade: %s, Área: %f Km²\n", jogadorA, nomeCidadeA, areaA);
     printf("Jogador %s, Cidade: %s, Área: %f Km²\n", jogadorB, nomeCidadeB, areaB);   
     
     resultadoA = areaA > areaB ? 1 : 0;
     resultadoB = areaB > areaA ? 1 : 0;
     
     if (resultadoA) {
         printf("Vencedor rodada %s,  cidade: %s Área: %f Km² parabens\n",  jogadorA, nomeCidadeA, areaA);        
     } else if (resultadoB) {
         printf("Vencedor rodada %s,  cidade: %s  Área: %f Km² parabens\n", jogadorB, nomeCidadeB, areaB);        
     } else {
         printf("Deu empate!\n");
     }
     break;
 
 case 3:
 
     printf(" ### Entre com o nome da cidade de sua carta %s, nome da cidade sem espaço : ### \n", jogadorA); 
     scanf("%s", &nomeCidadeA);
 
     printf(" ### Digite o PIB da sua carta %s: ### \n", jogadorA);
     scanf("%f", &pibA);
 
     printf(" ### Entre com o nome da cidade de sua carta %s, nome da cidade sem espaço : ### \n", jogadorB); 
     scanf("%s", &nomeCidadeB);
 
     printf(" ### Digite a PIB da sua carta %s: ### \n", jogadorB);
     scanf("%f", &pibB);
 
     printf(" ##### Comparação dos atributos #####\n");
     printf("Jogador %s, Cidade: %s, PIB R$: %f bilhões de reais\n", jogadorA, nomeCidadeA, pibA);
     printf("Jogador %s, Cidade: %s, PIB R$: %f bilhões de reais\n", jogadorB, nomeCidadeB, pibB);
 
     resultadoA = pibA > pibB ? 1 : 0;
     resultadoB = pibB > pibA ? 1 : 0;
 
     if (resultadoA) {
         printf("Vencedor rodada %s,  cidade: %s PIB R$: %f bilhões de reais parabens\n",  jogadorA, nomeCidadeA, pibA);        
     } else if (resultadoB) {
         printf("Vencedor rodada %s,  cidade: %s PIB R$:: %f bilhões de reais parabens\n", jogadorB, nomeCidadeB, pibB);        
     } else {
         printf("Deu empate!\n");
     }
     break;
 
     case 4:
 
     printf(" ### Entre com o nome da cidade de sua carta %s, nome da cidade sem espaço : ### \n", jogadorA); 
     scanf("%s", &nomeCidadeA);
 
     printf(" ### Digite a quantidade de pontos turisticos: %s: ### \n", jogadorA);
     scanf("%i", &pontos_turisticosA);
     
     //Atributos da segunda carta;
     printf(" ### Entre com o nome da cidade de sua carta %s, nome da cidade sem espaço : ### \n", jogadorB); 
     scanf("%s", &nomeCidadeB);
 
     printf(" ### Digite a quantidade de pontos turisticos: %s: ### \n", jogadorB);
     scanf("%i", &pontos_turisticosB);
 
     printf(" ##### Comparação dos atributos #####\n");
     printf("Jogador %s, Cidade: %s, quantidade de pontos turisticos: %i\n", jogadorA, nomeCidadeA, pontos_turisticosA);
     printf("Jogador %s, Cidade: %s, quantidade de pontos turisticos: %i\n", jogadorB, nomeCidadeB, pontos_turisticosB);
 
     resultadoA = pontos_turisticosA > pontos_turisticosB ? 1 : 0;
     resultadoB = pontos_turisticosB > pontos_turisticosA ? 1 : 0;
 
     if (resultadoA) {
         printf("Vencedor rodada %s,  cidade: %s quantidade de pontos turisticos: %i parabens\n",  jogadorA, nomeCidadeA, pontos_turisticosA);        
     } else if (resultadoB) {
         printf("Vencedor rodada %s,  cidade: %s quantidade de pontos turisticos: %i parabens\n", jogadorB, nomeCidadeB, pontos_turisticosB);        
     } else {
         printf("Deu empate!\n");
     }
     break;
 
 case 5:
     //densidade populacional
     printf(" ### Entre com o nome da cidade de sua carta %s, nome da cidade sem espaço : ### \n", jogadorA); 
     scanf("%s", &nomeCidadeA);
 
     printf(" ### Digite a população da sua carta %s: ### \n", jogadorA);
     scanf("%lu", &populacaoA);
 
     printf("Digite a Área em Km² da sua carta %s:\n", jogadorA, areaA);
     scanf("%f", &areaA);
 
     printf(" ### Entre com o nome da cidade de sua carta %s, nome da cidade sem espaço : ### \n", jogadorB); 
     scanf("%s", &nomeCidadeB);
 
     printf(" ### Digite a população da sua carta %s: ### \n", jogadorB);
     scanf("%lu", &populacaoB);
 
     printf("Digite a Área em Km² da sua carta %s:\n", jogadorB, areaB);
     scanf("%f", &areaB);
    
     densidadePopulacionalA = (float) populacaoA / areaA;
     densidadePopulacionalB = (float) populacaoB / areaB;
 
     printf(" ##### Comparação dos atributos #####\n");
     printf("Jogador %s, Cidade: %s, densidade populacional: %f hab/Km²\n", jogadorA, nomeCidadeA, densidadePopulacionalA);
     printf("Jogador %s, Cidade: %s, densidade populacional: %f hab/Km²\n", jogadorB, nomeCidadeB, densidadePopulacionalB);
 
     resultadoA = densidadePopulacionalA < densidadePopulacionalB ? 1 : 0;
     resultadoB = densidadePopulacionalB < densidadePopulacionalA ? 1 : 0;
 
     if (resultadoA) {
         printf("Vencedor rodada %s,  cidade: %s densidade populacional: %f hab/Km² parabens\n",  jogadorA, nomeCidadeA, densidadePopulacionalA);        
     } else if (resultadoB) {
         printf("Vencedor rodada %s,  cidade: %s densidade populacional: %f hab/Km² parabens\n", jogadorB, nomeCidadeB, densidadePopulacionalB);        
     } else {
         printf("Deu empate!\n");
     }
     break;
 
 
     case 6:
     //pib per capita
     // Jogador 1
     printf(" ### Entre com o nome da cidade de sua carta %s, nome da cidade sem espaço : ### \n", jogadorA); 
     scanf("%s", &nomeCidadeA);
 
     printf(" ### Digite a população da sua carta %s: ### \n", jogadorA);
     scanf("%lu", &populacaoA);
 
     printf(" ### Digite o PIB da sua carta %s: ### \n", jogadorA);
     scanf("%f", &pibA);
      //Jogador 2
     printf(" ### Entre com o nome da cidade de sua carta %s, nome da cidade sem espaço : ### \n", jogadorB); 
     scanf("%s", &nomeCidadeB);
 
     printf(" ### Digite a população da sua carta %s: ### \n", jogadorB);
     scanf("%lu", &populacaoB);
 
     printf(" ### Digite a PIB da sua carta %s: ### \n", jogadorB);
     scanf("%f", &pibB);
 
     pib_per_capitaA = (float) populacaoA / pibA;
     pib_per_capitaB = (float) populacaoB / pibB;
 
 
     printf(" ##### Comparação dos atributos #####\n");
     printf("Jogador %s, Cidade: %s, PIB per Capita R$: %f Reais\n", jogadorA, nomeCidadeA, pib_per_capitaA);
     printf("Jogador %s, Cidade: %s, PIB per Capita R$: %f Reais\n", jogadorB, nomeCidadeB, pib_per_capitaB);
 
     resultadoA = pib_per_capitaA > pib_per_capitaB ? 1 : 0;
     resultadoB = pib_per_capitaB > pib_per_capitaA ? 1 : 0;
 
     if (resultadoA) {
         printf("Vencedor rodada %s,  cidade: %s PIB per Capita R$: %f Reais parabens\n",  jogadorA, nomeCidadeA, pib_per_capitaA);        
     } else if (resultadoB) {
         printf("Vencedor rodada %s,  cidade: %s PIB per Capita R$: %f Reais parabens\n", jogadorB, nomeCidadeB, pib_per_capitaB);        
     } else {
         printf("Deu empate!\n");
     }
     break;

    }}


    printf(" ###### Seja bem vindo a quinta rodada #####\n");
    printf("Escolha os atributos para batalhar:\n");

    printf("1. População:\n");
    printf("2. Área:\n");
    printf("3. PIB:\n");
    printf("4. Pontos turísticos:\n");
    printf("5. Densidade Populacional:\n");
    printf("6. PIB per capita:\n");

    printf("Digite o número do atributo escolhido ?\n");
    scanf("%i", &opcao5);


    if (opcao1 == opcao2 == opcao3 == opcao4 == opcao5) {
        printf("Escolha o atributo diferente, não pode ser repedito !\n");
        printf("Retorne ao menu inicial:\n");
    } else { switch (opcao5)
    {
    case 1:
    
     //Atributos da primeria carta;
     printf(" ### Entre com o nome da cidade de sua carta %s, nome da cidade sem espaço : ### \n", jogadorA); 
     scanf("%s", &nomeCidadeA);
     printf(" ### Digite a população da sua carta %s: ### \n", jogadorA);
     scanf("%lu", &populacaoA);
     
     //Atributos da segunda carta;
     printf(" ### Entre com o nome da cidade de sua carta %s, nome da cidade sem espaço : ### \n", jogadorB); 
     scanf("%s", &nomeCidadeB);
     printf(" ### Digite a população da sua carta %s: ### \n", jogadorB);
     scanf("%lu", &populacaoB);
 
     //Comparação dos Atributos;    
     printf(" ##### Comparação dos atributos #####\n");
     printf("Jogador %s, Cidade: %s, população: %lu\n", jogadorA, nomeCidadeA, populacaoA);
     printf("Jogador %s, Cidade: %s, população: %lu\n", jogadorB, nomeCidadeB, populacaoB);
 
     //operador ternario:
     resultadoA = populacaoA > populacaoB ? 1 : 0;
     resultadoB = populacaoB > populacaoA ? 1 : 0;
 
     //lógica do jogo.
     if (resultadoA) {
         printf("Vencedor rodada %s,  cidade: %s população: %lu parabens\n",  jogadorA, nomeCidadeA, populacaoA);        
     } else if (resultadoB) {
         printf("Vencedor rodada %s,  cidade: %s  população: %lu parabens\n", jogadorB, nomeCidadeB, populacaoB);        
     } else {
         printf("Deu empate!\n");
     }
     break;
 
 case 2:
     
     printf(" ### Entre com o nome da cidade de sua carta %s, nome da cidade sem espaço : ### \n", jogadorA); 
     scanf("%s", &nomeCidadeA);
 
     printf("Digite a Área em Km² da sua carta %s:\n", jogadorA, areaA);
     scanf("%f", &areaA);
         
     printf(" ### Entre com o nome da cidade de sua carta: %s, nome da cidade sem espaço : ### \n", jogadorB); 
     scanf("%s", &nomeCidadeB);
 
     printf("Digite a Área em Km² da sua carta %s:\n", jogadorB, areaB);
     scanf("%f", &areaB);
         
     printf(" ##### Comparação dos atributos #####\n");
     printf("Jogador %s, Cidade: %s, Área: %f Km²\n", jogadorA, nomeCidadeA, areaA);
     printf("Jogador %s, Cidade: %s, Área: %f Km²\n", jogadorB, nomeCidadeB, areaB);   
     
     resultadoA = areaA > areaB ? 1 : 0;
     resultadoB = areaB > areaA ? 1 : 0;
     
     if (resultadoA) {
         printf("Vencedor rodada %s,  cidade: %s Área: %f Km² parabens\n",  jogadorA, nomeCidadeA, areaA);        
     } else if (resultadoB) {
         printf("Vencedor rodada %s,  cidade: %s  Área: %f Km² parabens\n", jogadorB, nomeCidadeB, areaB);        
     } else {
         printf("Deu empate!\n");
     }
     break;
 
 case 3:
 
     printf(" ### Entre com o nome da cidade de sua carta %s, nome da cidade sem espaço : ### \n", jogadorA); 
     scanf("%s", &nomeCidadeA);
 
     printf(" ### Digite o PIB da sua carta %s: ### \n", jogadorA);
     scanf("%f", &pibA);
 
     printf(" ### Entre com o nome da cidade de sua carta %s, nome da cidade sem espaço : ### \n", jogadorB); 
     scanf("%s", &nomeCidadeB);
 
     printf(" ### Digite a PIB da sua carta %s: ### \n", jogadorB);
     scanf("%f", &pibB);
 
     printf(" ##### Comparação dos atributos #####\n");
     printf("Jogador %s, Cidade: %s, PIB R$: %f bilhões de reais\n", jogadorA, nomeCidadeA, pibA);
     printf("Jogador %s, Cidade: %s, PIB R$: %f bilhões de reais\n", jogadorB, nomeCidadeB, pibB);
 
     resultadoA = pibA > pibB ? 1 : 0;
     resultadoB = pibB > pibA ? 1 : 0;
 
     if (resultadoA) {
         printf("Vencedor rodada %s,  cidade: %s PIB R$: %f bilhões de reais parabens\n",  jogadorA, nomeCidadeA, pibA);        
     } else if (resultadoB) {
         printf("Vencedor rodada %s,  cidade: %s PIB R$:: %f bilhões de reais parabens\n", jogadorB, nomeCidadeB, pibB);        
     } else {
         printf("Deu empate!\n");
     }
     break;
 
     case 4:
 
     printf(" ### Entre com o nome da cidade de sua carta %s, nome da cidade sem espaço : ### \n", jogadorA); 
     scanf("%s", &nomeCidadeA);
 
     printf(" ### Digite a quantidade de pontos turisticos: %s: ### \n", jogadorA);
     scanf("%i", &pontos_turisticosA);
     
     //Atributos da segunda carta;
     printf(" ### Entre com o nome da cidade de sua carta %s, nome da cidade sem espaço : ### \n", jogadorB); 
     scanf("%s", &nomeCidadeB);
 
     printf(" ### Digite a quantidade de pontos turisticos: %s: ### \n", jogadorB);
     scanf("%i", &pontos_turisticosB);
 
     printf(" ##### Comparação dos atributos #####\n");
     printf("Jogador %s, Cidade: %s, quantidade de pontos turisticos: %i\n", jogadorA, nomeCidadeA, pontos_turisticosA);
     printf("Jogador %s, Cidade: %s, quantidade de pontos turisticos: %i\n", jogadorB, nomeCidadeB, pontos_turisticosB);
 
     resultadoA = pontos_turisticosA > pontos_turisticosB ? 1 : 0;
     resultadoB = pontos_turisticosB > pontos_turisticosA ? 1 : 0;
 
     if (resultadoA) {
         printf("Vencedor rodada %s,  cidade: %s quantidade de pontos turisticos: %i parabens\n",  jogadorA, nomeCidadeA, pontos_turisticosA);        
     } else if (resultadoB) {
         printf("Vencedor rodada %s,  cidade: %s quantidade de pontos turisticos: %i parabens\n", jogadorB, nomeCidadeB, pontos_turisticosB);        
     } else {
         printf("Deu empate!\n");
     }
     break;
 
 case 5:
     //densidade populacional
     printf(" ### Entre com o nome da cidade de sua carta %s, nome da cidade sem espaço : ### \n", jogadorA); 
     scanf("%s", &nomeCidadeA);
 
     printf(" ### Digite a população da sua carta %s: ### \n", jogadorA);
     scanf("%lu", &populacaoA);
 
     printf("Digite a Área em Km² da sua carta %s:\n", jogadorA, areaA);
     scanf("%f", &areaA);
 
     printf(" ### Entre com o nome da cidade de sua carta %s, nome da cidade sem espaço : ### \n", jogadorB); 
     scanf("%s", &nomeCidadeB);
 
     printf(" ### Digite a população da sua carta %s: ### \n", jogadorB);
     scanf("%lu", &populacaoB);
 
     printf("Digite a Área em Km² da sua carta %s:\n", jogadorB, areaB);
     scanf("%f", &areaB);
    
     densidadePopulacionalA = (float) populacaoA / areaA;
     densidadePopulacionalB = (float) populacaoB / areaB;
 
     printf(" ##### Comparação dos atributos #####\n");
     printf("Jogador %s, Cidade: %s, densidade populacional: %f hab/Km²\n", jogadorA, nomeCidadeA, densidadePopulacionalA);
     printf("Jogador %s, Cidade: %s, densidade populacional: %f hab/Km²\n", jogadorB, nomeCidadeB, densidadePopulacionalB);
 
     resultadoA = densidadePopulacionalA < densidadePopulacionalB ? 1 : 0;
     resultadoB = densidadePopulacionalB < densidadePopulacionalA ? 1 : 0;
 
     if (resultadoA) {
         printf("Vencedor rodada %s,  cidade: %s densidade populacional: %f hab/Km² parabens\n",  jogadorA, nomeCidadeA, densidadePopulacionalA);        
     } else if (resultadoB) {
         printf("Vencedor rodada %s,  cidade: %s densidade populacional: %f hab/Km² parabens\n", jogadorB, nomeCidadeB, densidadePopulacionalB);        
     } else {
         printf("Deu empate!\n");
     }
     break;
 
 
     case 6:
     //pib per capita
     // Jogador 1
     printf(" ### Entre com o nome da cidade de sua carta %s, nome da cidade sem espaço : ### \n", jogadorA); 
     scanf("%s", &nomeCidadeA);
 
     printf(" ### Digite a população da sua carta %s: ### \n", jogadorA);
     scanf("%lu", &populacaoA);
 
     printf(" ### Digite o PIB da sua carta %s: ### \n", jogadorA);
     scanf("%f", &pibA);
      //Jogador 2
     printf(" ### Entre com o nome da cidade de sua carta %s, nome da cidade sem espaço : ### \n", jogadorB); 
     scanf("%s", &nomeCidadeB);
 
     printf(" ### Digite a população da sua carta %s: ### \n", jogadorB);
     scanf("%lu", &populacaoB);
 
     printf(" ### Digite a PIB da sua carta %s: ### \n", jogadorB);
     scanf("%f", &pibB);
 
     pib_per_capitaA = (float) populacaoA / pibA;
     pib_per_capitaB = (float) populacaoB / pibB;
 
 
     printf(" ##### Comparação dos atributos #####\n");
     printf("Jogador %s, Cidade: %s, PIB per Capita R$: %f Reais\n", jogadorA, nomeCidadeA, pib_per_capitaA);
     printf("Jogador %s, Cidade: %s, PIB per Capita R$: %f Reais\n", jogadorB, nomeCidadeB, pib_per_capitaB);
 
     resultadoA = pib_per_capitaA > pib_per_capitaB ? 1 : 0;
     resultadoB = pib_per_capitaB > pib_per_capitaA ? 1 : 0;
 
     if (resultadoA) {
         printf("Vencedor rodada %s,  cidade: %s PIB per Capita R$: %f Reais parabens\n",  jogadorA, nomeCidadeA, pib_per_capitaA);        
     } else if (resultadoB) {
         printf("Vencedor rodada %s,  cidade: %s PIB per Capita R$: %f Reais parabens\n", jogadorB, nomeCidadeB, pib_per_capitaB);        
     } else {
         printf("Deu empate!\n");
     }
     break;

    }}


    printf(" ###### Seja bem vindo a quarta rodada #####\n");
    printf("Escolha os atributos para batalhar:\n");

    printf("1. População:\n");
    printf("2. Área:\n");
    printf("3. PIB:\n");
    printf("4. Pontos turísticos:\n");
    printf("5. Densidade Populacional:\n");
    printf("6. PIB per capita:\n");

    printf("Digite o número do atributo escolhido ?\n");
    scanf("%i", &opcao6);


    if (opcao1 == opcao2 == opcao3 == opcao4 == opcao5 == opcao6) {
        printf("Escolha o atributo diferente, não pode ser repedito !\n");
        printf("Retorne ao menu inicial:\n");
    } else { switch (opcao6)
    {
    case 1:
    
     //Atributos da primeria carta;
     printf(" ### Entre com o nome da cidade de sua carta %s, nome da cidade sem espaço : ### \n", jogadorA); 
     scanf("%s", &nomeCidadeA);
     printf(" ### Digite a população da sua carta %s: ### \n", jogadorA);
     scanf("%lu", &populacaoA);
     
     //Atributos da segunda carta;
     printf(" ### Entre com o nome da cidade de sua carta %s, nome da cidade sem espaço : ### \n", jogadorB); 
     scanf("%s", &nomeCidadeB);
     printf(" ### Digite a população da sua carta %s: ### \n", jogadorB);
     scanf("%lu", &populacaoB);
 
     //Comparação dos Atributos;    
     printf(" ##### Comparação dos atributos #####\n");
     printf("Jogador %s, Cidade: %s, população: %lu\n", jogadorA, nomeCidadeA, populacaoA);
     printf("Jogador %s, Cidade: %s, população: %lu\n", jogadorB, nomeCidadeB, populacaoB);
 
     //operador ternario:
     resultadoA = populacaoA > populacaoB ? 1 : 0;
     resultadoB = populacaoB > populacaoA ? 1 : 0;
 
     //lógica do jogo.
     if (resultadoA) {
         printf("Vencedor rodada %s,  cidade: %s população: %lu parabens\n",  jogadorA, nomeCidadeA, populacaoA);        
     } else if (resultadoB) {
         printf("Vencedor rodada %s,  cidade: %s  população: %lu parabens\n", jogadorB, nomeCidadeB, populacaoB);        
     } else {
         printf("Deu empate!\n");
     }
     break;
 
 case 2:
     
     printf(" ### Entre com o nome da cidade de sua carta %s, nome da cidade sem espaço : ### \n", jogadorA); 
     scanf("%s", &nomeCidadeA);
 
     printf("Digite a Área em Km² da sua carta %s:\n", jogadorA, areaA);
     scanf("%f", &areaA);
         
     printf(" ### Entre com o nome da cidade de sua carta: %s, nome da cidade sem espaço : ### \n", jogadorB); 
     scanf("%s", &nomeCidadeB);
 
     printf("Digite a Área em Km² da sua carta %s:\n", jogadorB, areaB);
     scanf("%f", &areaB);
         
     printf(" ##### Comparação dos atributos #####\n");
     printf("Jogador %s, Cidade: %s, Área: %f Km²\n", jogadorA, nomeCidadeA, areaA);
     printf("Jogador %s, Cidade: %s, Área: %f Km²\n", jogadorB, nomeCidadeB, areaB);   
     
     resultadoA = areaA > areaB ? 1 : 0;
     resultadoB = areaB > areaA ? 1 : 0;
     
     if (resultadoA) {
         printf("Vencedor rodada %s,  cidade: %s Área: %f Km² parabens\n",  jogadorA, nomeCidadeA, areaA);        
     } else if (resultadoB) {
         printf("Vencedor rodada %s,  cidade: %s  Área: %f Km² parabens\n", jogadorB, nomeCidadeB, areaB);        
     } else {
         printf("Deu empate!\n");
     }
     break;
 
 case 3:
 
     printf(" ### Entre com o nome da cidade de sua carta %s, nome da cidade sem espaço : ### \n", jogadorA); 
     scanf("%s", &nomeCidadeA);
 
     printf(" ### Digite o PIB da sua carta %s: ### \n", jogadorA);
     scanf("%f", &pibA);
 
     printf(" ### Entre com o nome da cidade de sua carta %s, nome da cidade sem espaço : ### \n", jogadorB); 
     scanf("%s", &nomeCidadeB);
 
     printf(" ### Digite a PIB da sua carta %s: ### \n", jogadorB);
     scanf("%f", &pibB);
 
     printf(" ##### Comparação dos atributos #####\n");
     printf("Jogador %s, Cidade: %s, PIB R$: %f bilhões de reais\n", jogadorA, nomeCidadeA, pibA);
     printf("Jogador %s, Cidade: %s, PIB R$: %f bilhões de reais\n", jogadorB, nomeCidadeB, pibB);
 
     resultadoA = pibA > pibB ? 1 : 0;
     resultadoB = pibB > pibA ? 1 : 0;
 
     if (resultadoA) {
         printf("Vencedor rodada %s,  cidade: %s PIB R$: %f bilhões de reais parabens\n",  jogadorA, nomeCidadeA, pibA);        
     } else if (resultadoB) {
         printf("Vencedor rodada %s,  cidade: %s PIB R$:: %f bilhões de reais parabens\n", jogadorB, nomeCidadeB, pibB);        
     } else {
         printf("Deu empate!\n");
     }
     break;
 
     case 4:
 
     printf(" ### Entre com o nome da cidade de sua carta %s, nome da cidade sem espaço : ### \n", jogadorA); 
     scanf("%s", &nomeCidadeA);
 
     printf(" ### Digite a quantidade de pontos turisticos: %s: ### \n", jogadorA);
     scanf("%i", &pontos_turisticosA);
     
     //Atributos da segunda carta;
     printf(" ### Entre com o nome da cidade de sua carta %s, nome da cidade sem espaço : ### \n", jogadorB); 
     scanf("%s", &nomeCidadeB);
 
     printf(" ### Digite a quantidade de pontos turisticos: %s: ### \n", jogadorB);
     scanf("%i", &pontos_turisticosB);
 
     printf(" ##### Comparação dos atributos #####\n");
     printf("Jogador %s, Cidade: %s, quantidade de pontos turisticos: %i\n", jogadorA, nomeCidadeA, pontos_turisticosA);
     printf("Jogador %s, Cidade: %s, quantidade de pontos turisticos: %i\n", jogadorB, nomeCidadeB, pontos_turisticosB);
 
     resultadoA = pontos_turisticosA > pontos_turisticosB ? 1 : 0;
     resultadoB = pontos_turisticosB > pontos_turisticosA ? 1 : 0;
 
     if (resultadoA) {
         printf("Vencedor rodada %s,  cidade: %s quantidade de pontos turisticos: %i parabens\n",  jogadorA, nomeCidadeA, pontos_turisticosA);        
     } else if (resultadoB) {
         printf("Vencedor rodada %s,  cidade: %s quantidade de pontos turisticos: %i parabens\n", jogadorB, nomeCidadeB, pontos_turisticosB);        
     } else {
         printf("Deu empate!\n");
     }
     break;
 
 case 5:
     //densidade populacional
     printf(" ### Entre com o nome da cidade de sua carta %s, nome da cidade sem espaço : ### \n", jogadorA); 
     scanf("%s", &nomeCidadeA);
 
     printf(" ### Digite a população da sua carta %s: ### \n", jogadorA);
     scanf("%lu", &populacaoA);
 
     printf("Digite a Área em Km² da sua carta %s:\n", jogadorA, areaA);
     scanf("%f", &areaA);
 
     printf(" ### Entre com o nome da cidade de sua carta %s, nome da cidade sem espaço : ### \n", jogadorB); 
     scanf("%s", &nomeCidadeB);
 
     printf(" ### Digite a população da sua carta %s: ### \n", jogadorB);
     scanf("%lu", &populacaoB);
 
     printf("Digite a Área em Km² da sua carta %s:\n", jogadorB, areaB);
     scanf("%f", &areaB);
    
     densidadePopulacionalA = (float) populacaoA / areaA;
     densidadePopulacionalB = (float) populacaoB / areaB;
 
     printf(" ##### Comparação dos atributos #####\n");
     printf("Jogador %s, Cidade: %s, densidade populacional: %f hab/Km²\n", jogadorA, nomeCidadeA, densidadePopulacionalA);
     printf("Jogador %s, Cidade: %s, densidade populacional: %f hab/Km²\n", jogadorB, nomeCidadeB, densidadePopulacionalB);
 
     resultadoA = densidadePopulacionalA < densidadePopulacionalB ? 1 : 0;
     resultadoB = densidadePopulacionalB < densidadePopulacionalA ? 1 : 0;
 
     if (resultadoA) {
         printf("Vencedor rodada %s,  cidade: %s densidade populacional: %f hab/Km² parabens\n",  jogadorA, nomeCidadeA, densidadePopulacionalA);        
     } else if (resultadoB) {
         printf("Vencedor rodada %s,  cidade: %s densidade populacional: %f hab/Km² parabens\n", jogadorB, nomeCidadeB, densidadePopulacionalB);        
     } else {
         printf("Deu empate!\n");
     }
     break;
 
 
     case 6:
     //pib per capita
     // Jogador 1
     printf(" ### Entre com o nome da cidade de sua carta %s, nome da cidade sem espaço : ### \n", jogadorA); 
     scanf("%s", &nomeCidadeA);
 
     printf(" ### Digite a população da sua carta %s: ### \n", jogadorA);
     scanf("%lu", &populacaoA);
 
     printf(" ### Digite o PIB da sua carta %s: ### \n", jogadorA);
     scanf("%f", &pibA);
      //Jogador 2
     printf(" ### Entre com o nome da cidade de sua carta %s, nome da cidade sem espaço : ### \n", jogadorB); 
     scanf("%s", &nomeCidadeB);
 
     printf(" ### Digite a população da sua carta %s: ### \n", jogadorB);
     scanf("%lu", &populacaoB);
 
     printf(" ### Digite a PIB da sua carta %s: ### \n", jogadorB);
     scanf("%f", &pibB);
 
     pib_per_capitaA = (float) populacaoA / pibA;
     pib_per_capitaB = (float) populacaoB / pibB;
 
 
     printf(" ##### Comparação dos atributos #####\n");
     printf("Jogador %s, Cidade: %s, PIB per Capita R$: %f Reais\n", jogadorA, nomeCidadeA, pib_per_capitaA);
     printf("Jogador %s, Cidade: %s, PIB per Capita R$: %f Reais\n", jogadorB, nomeCidadeB, pib_per_capitaB);
 
     resultadoA = pib_per_capitaA > pib_per_capitaB ? 1 : 0;
     resultadoB = pib_per_capitaB > pib_per_capitaA ? 1 : 0;
 
     if (resultadoA) {
         printf("Vencedor rodada %s,  cidade: %s PIB per Capita R$: %f Reais parabens\n",  jogadorA, nomeCidadeA, pib_per_capitaA);        
     } else if (resultadoB) {
         printf("Vencedor rodada %s,  cidade: %s PIB per Capita R$: %f Reais parabens\n", jogadorB, nomeCidadeB, pib_per_capitaB);        
     } else {
         printf("Deu empate!\n");
     }
     break;

    }}
    printf(" ##### Resultado Final #####\n");
    if (resultadoA > resultadoB) {
        printf("O vencedor do jogo foi %s parabens\n", jogadorA);
    } else if (resultadoA < resultadoB) {
        printf("O vencedor do jogo foi %s parabens\n", jogadorB);
    } else {
        printf("O jogo deu Empate!");
    }


return 0;

}