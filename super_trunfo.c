#include  <stdio.h>

int main (){

    // Como o objetivo da tarefa era ler registrar e ler duas cartas, inicialmente eu
    // havia declarado somente, uma variavel para as duas cartas, mas depois percebi
    // que ficaria melhor, cada carta ter sua propria variavel 
    int pontosturisticos1, pontosturisticos2;
    float resultadopopulacao, resultadoarea, resultadopib, resultadopontosturisticos;
    float resultadodensidade, resultadopercapita, resultadoinverso, resultadopoder;
    float populacao1, populacao2, superpoder1, superpoder2;
    float areakm1, pib1, areakm2, pib2, inversodensidade1, inversodensidade2;
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
    scanf(" %d", &pontosturisticos1 );  
    
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
    scanf(" %d", &pontosturisticos2 );  

    //Densidade Populacional e PIB per Capita
    densidade1 = populacao1 / areakm1;
    densidade2 = populacao2 / areakm2;
    percapita1 = pib1 / populacao1;
    percapita2 = pib2 / populacao2;

    //Inverso da Densidade
    inversodensidade1 = 1.0 / densidade1;
    inversodensidade2 = 1.0 / densidade2;

    //Super Poder Cartas
    superpoder1 = populacao1 + pib1 + areakm1 + pontosturisticos1 + percapita1 + inversodensidade1;    
    superpoder2 = populacao2 + pib2 + areakm2 + pontosturisticos2 + percapita2 + inversodensidade2;
    

    
    //Exibição da Carta 1
    printf("Carta 1\n");
    printf("Seu Estado é: %s\n", estado1);
    printf("O Código é: %s\n", idcarta);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %f\n", populacao1);
    printf("Esta Cidade Tem: %.2f km²\n", areakm1);
    printf("PIB: %.2f Bilhões de Reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosturisticos1);
    printf("A Densidade Populacional e %.2f hab/km²: \n", densidade1);
    printf("PIB per Capita: %.2f\n", percapita1);
    printf("Densidade Invertida: %.2f\n", inversodensidade1);
    printf("SUPER PODER!: %.2f\n", superpoder1);


    //Exibição da Carta 2
    printf("Carta 2\n");
    printf("Seu Estado é: %s\n", estado2);
    printf("O Código é: %s\n", idcarta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %.2f\n", populacao2);
    printf("Esta Cidade Tem: %.2f km²\n", areakm2);
    printf("PIB: %.2f Bilhões de Reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosturisticos2);
    printf("A Densidade Populacional e %.2f hab/km²: \n", densidade2);
    printf("PIB per Capita: %.2f\n", percapita2);
    printf("Densidade Invertida: %.2f\n", inversodensidade2);
    printf("SUPER PODER!: %.2f\n", superpoder2);

    //Comparacoes Cartas
    resultadopopulacao = populacao1 >= populacao2;
    resultadoarea = areakm1 >= areakm2;
    resultadopib = pib1 >= pib2;
    resultadopontosturisticos = pontosturisticos1 >= pontosturisticos2;
    resultadodensidade = densidade1 >= densidade2;
    resultadopercapita = percapita1 >= percapita2;
    resultadoinverso = inversodensidade1 <= inversodensidade2;
    resultadopoder = superpoder1 >= superpoder2;

    //Exibicao dos Resultados
    printf("Hora da Verdade, Vamos Comparar as Cartas do Super Trunfo\n");
    printf("Se o Resultado for 1 a Carta 1 foi Vencedor, caso for 0 a Carta 2 foi Vendora\n");
    printf("Boa sorte!\n");
    printf("Vencedor Populacao e: %d \n", resultadopopulacao);
    printf("Vencedor Areakm² e: %d \n", resultadoarea);
    printf("Vencedor PIB e: %d \n", resultadopib);
    printf("Vencedor Pontos Turisticos e: %d \n", resultadopontosturisticos);
    printf("Vencedor Densidade e: %d \n", resultadodensidade);
    printf("Vencedor PIB Per Capita e: %d \n", resultadopercapita);
    printf("Vencedor Densidade Inversa e: %d \n", resultadoinverso);
    printf("Vencedor SUPER PODER! e: %d \n", resultadopoder);

    




    return 0;
    
}
