#include  <stdio.h>

int main (){

    // Como o objetivo da tarefa era ler e registrar duas cartas, inicialmente eu
    // havia declarado somente, uma variavel para as duas cartas, mas depois percebi
    // que ficaria melhor, cada carta ter sua propria variavel 

    float populacao1, pontosturisticos1, populacao2, pontosturisticos2;
    float areakm1, pib1, areakm2, pib2;
    float densidade1, densidade2, percapita1, percapita2;
    char estado1[30], cidade1[15], idcarta[15], estado2[2], cidade2[15], idcarta2[30];

    // Como na explicacao da atividade a visualizao das informacoes das cartas era uma em baixo
    // da outra, decidi dividir cada processo em dois blocos, sendo o primeiro a coleta de dados
    // e na segunda a vizualicao dos dados como exemplificado na atividade.

    printf("Bem Vindo ao Desafio Super Trunfo!\nDigite as Informações da Primeira Carta!\n" );
    printf("Carta 1\n");

    printf("Digite a UF do seu Estado:");
    scanf(" %s", estado1 );    

    printf("Digite o Código da Sua Carta:");
    scanf("%s", idcarta );   

    printf("Qual o Nome da Cidade:");
    scanf(" %s", cidade1 );    

    printf("Qual a População desta Cidade ?:");
    scanf(" %f", &populacao1 );    

    printf("Qual a Area (km²) desta Cidade ?");
    scanf(" %f", &areakm1 ); 

    printf("Qual o valor do PIB desta Cidade?");
    scanf(" %f", &pib1 );  
    
    printf("Quantos Pontos Turísticos essa Cidade Possui ?");
    scanf(" %f", &pontosturisticos1 );  
    
    printf("Carta 2\n");

    printf("Digite a UF do seu Estado:");
    scanf(" %s", estado2 );    

    printf("Digite o Código da Sua Carta:");
    scanf(" %s", idcarta2 );   

    printf("Qual o Nome da Cidade:");
    scanf(" %s", cidade2 );    

    printf("Qual a População desta Cidade ?:");
    scanf(" %f", &populacao2 );    

    printf("Qual a Area (km²) desta Cidade ?");
    scanf(" %f", &areakm2 ); 

    printf("Qual o valor do PIB desta Cidade?");
    scanf(" %f", &pib2 );  
    
    printf("Quantos Pontos Turísticos essa Cidade Possui ?");
    scanf(" %f", &pontosturisticos2 );  

    //aqui so fiz tratar os dados que ja existiam dentro do codigo inicial, usando 
    //os as funcoes de matematicas e assim exibir os resultaod solicitados no desafio aventureiro
    densidade1 = populacao1 / areakm1;
    densidade2 = populacao2 / areakm2;    

    percapita1 = pib1 / populacao1;
    percapita2 = pib2 / populacao2;
    
    
    printf("Carta 1\n");
    printf("Seu Estado é: %s\n", estado1);
    printf("O Código é: %s\n", idcarta);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %f\n", populacao1);
    printf("Esta Cidade Tem: %.2f km²\n", areakm1);
    printf("PIB: %.2f Bilhões de Reais\n", pib1);
    printf("Pontos Turisticos: %f\n", pontosturisticos1);
    printf("A Densidade Populacional e %.2f hab/km²: \n", densidade1);
    printf("PIB per Capita: %.2f\n", percapita1);

    printf("Carta 2\n");
    printf("Seu Estado é: %s\n", estado2);
    printf("O Código é: %s\n", idcarta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %.2f\n", populacao2);
    printf("Esta Cidade Tem: %.2f km²\n", areakm2);
    printf("PIB: %.2f Bilhões de Reais\n", pib2);
    printf("Pontos Turisticos: %.2f\n", pontosturisticos2);
    printf("A Densidade Populacional e %.2f hab/km²: \n", densidade2);
    printf("PIB per Capita: %.2f\n", percapita2);



    
    
}

