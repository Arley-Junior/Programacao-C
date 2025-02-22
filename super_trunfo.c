#include  <stdio.h>

int main (){

    // Como o objetivo da tarefa era ler registrar e ler duas cartas, inicialmente eu
    // havia declarado somente, uma variavel para as duas cartas, mas depois percebi
    // que ficaria melhor, cada carta ter sua propria variavel 

    int populacao1, pontosturisticos1, populacao2, pontosturisticos2;
    float areakm1, pib1, areakm2, pib2;
    char estado1[2], cidade1[15], idcarta[10], estado2[2], cidade2[15], idcarta2[4];

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
    scanf(" %d", &populacao1 );    

    printf("Qual a Area (km²) desta Cidade ?");
    scanf(" %f", &areakm1 ); 

    printf("Qual o valor do PIB desta Cidade?");
    scanf(" %f", &pib1 );  
    
    printf("Quantos Pontos Turísticos essa Cidade Possui ?");
    scanf(" %d", &pontosturisticos1 );  
    
    printf("Carta 2\n");

    printf("Digite a UF do seu Estado:");
    scanf(" %s", estado2 );    

    printf("Digite o Código da Sua Carta:");
    scanf(" %s", idcarta2 );   

    printf("Qual o Nome da Cidade:");
    scanf(" %s", cidade2 );    

    printf("Qual a População desta Cidade ?:");
    scanf(" %d", &populacao2 );    

    printf("Qual a Area (km²) desta Cidade ?");
    scanf(" %f", &areakm2 ); 

    printf("Qual o valor do PIB desta Cidade?");
    scanf(" %f", &pib2 );  
    
    printf("Quantos Pontos Turísticos essa Cidade Possui ?");
    scanf(" %d", &pontosturisticos2 );  
    
    
    printf("Carta 1\n");
    printf("Seu Estado é: %s\n", estado1);
    printf("O Código é: %s\n", idcarta);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Esta Cidade Tem: %f km²\n", areakm1);
    printf("PIB: %.2f Bilhões de Reais\n", pib1);
    printf("PIB: %d\n", pontosturisticos1);

    printf("Carta 2\n");
    printf("Seu Estado é: %s\n", estado2);
    printf("O Código é: %s\n", idcarta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Esta Cidade Tem: %f km²\n", areakm2);
    printf("PIB: %.2f Bilhões de Reais\n", pib2);
    printf("PIB: %d\n", pontosturisticos2);
}

