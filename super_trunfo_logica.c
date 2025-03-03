#include  <stdio.h>

int main (){

    // Como o objetivo da tarefa era ler registrar e ler duas cartas, inicialmente eu
    // havia declarado somente, uma variavel para as duas cartas, mas depois percebi
    // que ficaria melhor, cada carta ter sua propria variavel 
    int pontosturisticos1, pontosturisticos2, escolhaAtributo, escolhaAtributo2;
    float resu_carta1, resu_carta2, atributo1_carta1, atributo1_carta2, atributo2_carta1, atributo2_carta2;
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

    printf("Escolha qual Atributo a ser Comparado! \n");
    printf("1. Populacao \n");
    printf("2. Area (km²)\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. Densidade Demografica\n");
    printf("8. SUPER PODER!\n");
    printf("Escolha o Primeiro Atributo: \n");
    scanf("%d", &escolhaAtributo);


    //operador ternario usado para comparar a primeira escolha do usuario assim
    //eliminando a exibicacao da mesma no segundo menu de escolha de atributo
    printf("Escolha Outro Atributo para ser Comparado! \n");   
    escolhaAtributo == 1 ? printf("") : printf("1. Populacao \n");
    escolhaAtributo == 2 ? printf("") : printf("2. Area (km²) \n");
    escolhaAtributo == 3 ? printf("") : printf("3. PIB \n");
    escolhaAtributo == 4 ? printf("") : printf("4. Pontos Turisticos \n");
    escolhaAtributo == 5 ? printf("") : printf("5. Densidade Populacional \n");
    escolhaAtributo == 6 ? printf("") : printf("6. PIB per Capita \n");
    escolhaAtributo == 7 ? printf("") : printf("7. Densidade Demografica\n");
    escolhaAtributo == 8 ? printf("") : printf("8. SUPER PODER! \n");    
    printf("Escolha o Segundo Atributo: \n");
    scanf("%d", &escolhaAtributo2);

        if (escolhaAtributo == escolhaAtributo2){
            printf("Voce Escolheu o mesmo Atributo! \n");
        } 
    
    switch (escolhaAtributo)
    {
    case 1:
        printf("1. Populacao \n");
        if (populacao1 > populacao2){
            printf("Cidade: %s, Ganhou com Populacao de: %.2f \n", cidade1, populacao1);
            printf("Cidade: %s, Perdeu com Populacao de: %.2f \n", cidade2, populacao2);
        } else if (populacao1 < populacao2){
            printf("Cidade: %s, Ganhou com Populacao de: %.2f \n", cidade2, populacao2);
            printf("Cidade: %s, Perdeu com Populacao de: %.2f \n", cidade1, populacao1);
        } else{
            printf("Os Atributos Empataram! \n");
            printf("%s: %.2f Habitantes -  %s: %.2f Habintantes. \n", cidade1, populacao1, cidade2, populacao2);
        }   atributo1_carta1 = populacao1;
            atributo1_carta2 = populacao2;
        break;
    case 2:
        printf("2. Area (km²)\n"); 
        if (areakm1 > areakm2){
            printf("Cidade: %s, Ganhou com Area (km²) de: %.2f \n", cidade1, areakm1);
            printf("Cidade: %s, Perdeu com Area (km²) de: %.2f \n", cidade2, areakm2);
        } else if (areakm1 < areakm2){
            printf("Cidade: %s, Ganhou com Area (km²) de: %.2f \n", cidade2, areakm2);
            printf("Cidade: %s, Perdeu com Area (km²) de: %.2f \n", cidade1, areakm1);
        } else{
            printf("Os Atributos Empataram!\n");
            printf("%s: %.2f Habitantes -  %s: %.2f Habintantes. \n", cidade1, areakm1, cidade2, areakm2);
        }   atributo1_carta1 = areakm1;
            atributo1_carta2 = areakm2;
        break;  
    case 3:
        printf("3. PIB\n"); 
        if (pib1 > pib2){
            printf("Cidade: %s, Ganhou com PIB de: %.2f \n", cidade1, pib1);
            printf("Cidade: %s, Perdeu com PIB de: %.2f \n", cidade2, pib2);
        } else if (pib1 < pib2){
            printf("Cidade: %s, Ganhou com PIB de: %.2f \n", cidade2, pib2);
            printf("Cidade: %s, Perdeu com PIB de: %.2f \n", cidade1, pib1);
        } else{
            printf("Os Atributos Empataram!\n");
            printf("%s: %.2f Habitantes -  %s: %.2f Habintantes. \n", cidade1, pib1, cidade2, pib2);
        }   atributo1_carta1 = pib1;
            atributo1_carta2 = pib2;
        break; 
    case 4:
        printf("4. Pontos Turisticos\n"); 
        if (pontosturisticos1 > pontosturisticos2){
            printf("Cidade: %s, Ganhou com %.2f Pontos Turisticos!  \n", cidade1, pontosturisticos1);
            printf("Cidade: %s, Perdeu com %.2f Pontos Turisticos!  \n", cidade2, pontosturisticos2);
        } else if (pontosturisticos1 < pontosturisticos2){
            printf("Cidade: %s, Ganhou com %.2f Pontos Turisticos!  \n", cidade1, pontosturisticos2);
            printf("Cidade: %s, Perdeu com %.2f Pontos Turisticos!  \n", cidade2, pontosturisticos1);
        } else{
            printf("Os Atributos Empataram!\n");
            printf("%s: %.2f Habitantes -  %s: %.2f Habintantes. \n", cidade1, pontosturisticos1, cidade2, pontosturisticos2);
        }   atributo1_carta1 = pontosturisticos1;
            atributo1_carta2 = pontosturisticos2;
        break;
    case 5:
        printf("5. Densidade Populacional\n"); 
        if (densidade1 > densidade2){
            printf("Cidade: %s, Ganhou com Densidade Populacional de: %.2f \n", cidade1, densidade1);
            printf("Cidade: %s, Perdeu com Densidade Populacional de: %.2f \n", cidade2, densidade2);
        } else if (densidade1 < densidade2){
            printf("Cidade: %s, Ganhou com Densidade Populacional de: %.2f \n", cidade2, densidade2);
            printf("Cidade: %s, Perdeu com Densidade Populacional de: %.2f \n", cidade1, densidade1);
        } else{
            printf("Os Atributos Empataram!\n");
            printf("%s: %.2f Habitantes -  %s: %.2f Habintantes. \n", cidade1, densidade1, cidade2, densidade2);
        }   atributo1_carta1 = densidade1;
            atributo1_carta2 = densidade2;
        break;
    case 6:
        printf("6. PIB per Capita\n"); 
        if (percapita1 > percapita2){
            printf("Cidade: %s, Ganhou com PIB per Capita de: %.2f \n", cidade1, percapita1);
            printf("Cidade: %s, Perdeu com PIB per Capita de: %.2f \n", cidade2, percapita2);
        } else if (percapita1 < percapita2){
            printf("Cidade: %s, Ganhou com PIB per Capita de: %.2f \n", cidade2, percapita2);
            printf("Cidade: %s, Perdeu com PIB per Capita de: %.2f \n", cidade1, percapita1);
        } else{
            printf("Os Atributos Empataram!\n");
            printf("%s: %.2f Habitantes -  %s: %.2f Habintantes. \n", cidade1, percapita1, cidade2, percapita2);
        }   atributo1_carta1 = percapita1;
            atributo1_carta2 = percapita2;
        break;
    case 7:
        printf("7. Densidade Demografica\n"); 
        if (inversodensidade1 < inversodensidade2){
            printf("Cidade: %s, Ganhou com Densidade Demografica de: %.2f \n", cidade1, inversodensidade1);
            printf("Cidade: %s, Perdeu com Densidade Demografica de: %.2f \n", cidade2, inversodensidade2);
        } else if (inversodensidade1 > inversodensidade2){
            printf("Cidade: %s, Ganhou com Densidade Demografica de: %.2f \n", cidade2, inversodensidade2);
            printf("Cidade: %s, Perdeu com Densidade Demografica de: %.2f \n", cidade1, inversodensidade1);
        } else{
            printf("Os Atributos Empataram!\n");
            printf("%s: %.2f Habitantes -  %s: %.2f Habintantes. \n", cidade1, inversodensidade1, cidade2, inversodensidade2);
        }   atributo1_carta1 = inversodensidade1;
            atributo1_carta2 = inversodensidade2;
        break;
    case 8:
        printf("8. SUPER PODER!\n"); 
        if (superpoder1 > superpoder2){
            printf("Cidade: %s, Ganhou com PIB per Capita de: %.2f \n", cidade1, superpoder1);
            printf("Cidade: %s, Perdeu com PIB per Capita de: %.2f \n", cidade2, superpoder2);
        } else if (superpoder1 < superpoder2){
            printf("Cidade: %s, Ganhou com PIB per Capita de: %.2f \n", cidade2, superpoder2);
            printf("Cidade: %s, Perdeu com PIB per Capita de: %.2f \n", cidade1, superpoder1);
        } else{
            printf("Os Atributos Empataram!\n");
            printf("%s: %.2f Habitantes -  %s: %.2f Habintantes. \n", cidade1, superpoder1, cidade2, superpoder2);
        }   atributo1_carta1 = superpoder1;
            atributo1_carta2 = superpoder2;
        break;
        default: 
        printf("Opcao Invalida!");   
    }
        
    switch (escolhaAtributo2)
    {
    case 1:
        printf("1. Populacao \n");
        if (populacao1 > populacao2){
            printf("Cidade: %s, Ganhou com Populacao de: %.2f \n", cidade1, populacao1);
            printf("Cidade: %s, Perdeu com Populacao de: %.2f \n", cidade2, populacao2);
        } else if (populacao1 < populacao2){
            printf("Cidade: %s, Ganhou com Populacao de: %.2f \n", cidade2, populacao2);
            printf("Cidade: %s, Perdeu com Populacao de: %.2f \n", cidade1, populacao1);
        } else{
            printf("Os Atributos Empataram! \n");
            printf("%s: %.2f Habitantes -  %s: %.2f Habintantes. \n", cidade1, populacao1, cidade2, populacao2);
        }   atributo2_carta1 = populacao1;
            atributo2_carta2 = populacao2;  
        break;
    case 2:
        printf("2. Area (km²)\n"); 
        if (areakm1 > areakm2){
            printf("Cidade: %s, Ganhou com Area (km²) de: %.2f \n", cidade1, areakm1);
            printf("Cidade: %s, Perdeu com Area (km²) de: %.2f \n", cidade2, areakm2);
        } else if (areakm1 < areakm2){
            printf("Cidade: %s, Ganhou com Area (km²) de: %.2f \n", cidade2, areakm2);
            printf("Cidade: %s, Perdeu com Area (km²) de: %.2f \n", cidade1, areakm1);
        } else{
            printf("Os Atributos Empataram!\n");
            printf("%s: %.2f Habitantes -  %s: %.2f Habintantes. \n", cidade1, areakm1, cidade2, areakm2);
        }   atributo2_carta1 = areakm1;
            atributo2_carta2 = areakm2;     
        break;  
    case 3:
        printf("3. PIB\n"); 
        if (pib1 > pib2){
            printf("Cidade: %s, Ganhou com PIB de: %.2f \n", cidade1, pib1);
            printf("Cidade: %s, Perdeu com PIB de: %.2f \n", cidade2, pib2);
        } else if (pib1 < pib2){
            printf("Cidade: %s, Ganhou com PIB de: %.2f \n", cidade2, pib2);
            printf("Cidade: %s, Perdeu com PIB de: %.2f \n", cidade1, pib1);
        } else{
            printf("Os Atributos Empataram!\n");
            printf("%s: %.2f Habitantes -  %s: %.2f Habintantes. \n", cidade1, pib1, cidade2, pib2);
        }   atributo2_carta1 = pib1;
            atributo2_carta2 = pib2;  
        break; 
    case 4:
        printf("4. Pontos Turisticos\n"); 
        if (pontosturisticos1 > pontosturisticos2){
            printf("Cidade: %s, Ganhou com %.2f Pontos Turisticos!  \n", cidade1, pontosturisticos1);
            printf("Cidade: %s, Perdeu com %.2f Pontos Turisticos!  \n", cidade2, pontosturisticos2);
        } else if (pontosturisticos1 < pontosturisticos2){
            printf("Cidade: %s, Ganhou com %.2f Pontos Turisticos!  \n", cidade1, pontosturisticos2);
            printf("Cidade: %s, Perdeu com %.2f Pontos Turisticos!  \n", cidade2, pontosturisticos1);
        } else{
            printf("Os Atributos Empataram!\n");
            printf("%s: %.2f Habitantes -  %s: %.2f Habintantes. \n", cidade1, pontosturisticos1, cidade2, pontosturisticos2);
        }   atributo2_carta1 = pontosturisticos1;
            atributo2_carta2 = pontosturisticos2;  
        break;
    case 5:
        printf("5. Densidade Populacional\n"); 
        if (densidade1 > densidade2){
            printf("Cidade: %s, Ganhou com Densidade Populacional de: %.2f \n", cidade1, densidade1);
            printf("Cidade: %s, Perdeu com Densidade Populacional de: %.2f \n", cidade2, densidade2);
        } else if (densidade1 < densidade2){
            printf("Cidade: %s, Ganhou com Densidade Populacional de: %.2f \n", cidade2, densidade2);
            printf("Cidade: %s, Perdeu com Densidade Populacional de: %.2f \n", cidade1, densidade1);
        } else{
            printf("Os Atributos Empataram!\n");
            printf("%s: %.2f Habitantes -  %s: %.2f Habintantes. \n", cidade1, densidade1, cidade2, densidade2);
        }   atributo2_carta1 = densidade1;
            atributo2_carta2 = densidade2;  
        break;
    case 6:
        printf("6. PIB per Capita\n"); 
        if (percapita1 > percapita2){
            printf("Cidade: %s, Ganhou com PIB per Capita de: %.2f \n", cidade1, percapita1);
            printf("Cidade: %s, Perdeu com PIB per Capita de: %.2f \n", cidade2, percapita2);
        } else if (percapita1 < percapita2){
            printf("Cidade: %s, Ganhou com PIB per Capita de: %.2f \n", cidade2, percapita2);
            printf("Cidade: %s, Perdeu com PIB per Capita de: %.2f \n", cidade1, percapita1);
        } else{
            printf("Os Atributos Empataram!\n");
            printf("%s: %.2f Habitantes -  %s: %.2f Habintantes. \n", cidade1, percapita1, cidade2, percapita2);
        }   atributo2_carta1 = percapita1;
            atributo2_carta2 = percapita2;  
        break;
    case 7:
        printf("7. Densidade Demografica\n"); 
        if (inversodensidade1 < inversodensidade2){
            printf("Cidade: %s, Ganhou com Densidade Demografica de: %.2f \n", cidade1, inversodensidade1);
            printf("Cidade: %s, Perdeu com Densidade Demografica de: %.2f \n", cidade2, inversodensidade2);
        } else if (inversodensidade1 > inversodensidade2){
            printf("Cidade: %s, Ganhou com Densidade Demografica de: %.2f \n", cidade2, inversodensidade2);
            printf("Cidade: %s, Perdeu com Densidade Demografica de: %.2f \n", cidade1, inversodensidade1);
        } else{
            printf("Os Atributos Empataram!\n");
            printf("%s: %.2f Habitantes -  %s: %.2f Habintantes. \n", cidade1, inversodensidade1, cidade2, inversodensidade2);
        }   atributo2_carta1 = inversodensidade1;
            atributo2_carta2 = inversodensidade2;  
        break;
    case 8:
        printf("8. SUPER PODER!\n"); 
        if (superpoder1 > superpoder2){
            printf("Cidade: %s, Ganhou com PIB per Capita de: %.2f \n", cidade1, superpoder1);
            printf("Cidade: %s, Perdeu com PIB per Capita de: %.2f \n", cidade2, superpoder2);
        } else if (superpoder1 < superpoder2){
            printf("Cidade: %s, Ganhou com PIB per Capita de: %.2f \n", cidade2, superpoder2);
            printf("Cidade: %s, Perdeu com PIB per Capita de: %.2f \n", cidade1, superpoder1);
        } else{
            printf("Os Atributos Empataram!\n");
            printf("%s: %.2f Habitantes -  %s: %.2f Habintantes. \n", cidade1, superpoder1, cidade2, superpoder2);
        }   atributo2_carta1 = superpoder1;
            atributo2_carta2 = superpoder2;  
        break;
        default:
        printf("Opcao Invalida!");                                                       
    }   
        //no final de cada switch essas variaveis recebem o valor caso a mesma tenha sido escolhida
        //para somar os atributos da carta vencedora, e ai usando a estrutura if para exibir
        //o resultado de qual foi a carta vencedora.
        resu_carta1 = atributo1_carta1 + atributo2_carta1;
        resu_carta2 = atributo1_carta2 + atributo2_carta2;
        
        if (resu_carta1 > resu_carta2){
            printf("A Carta Vencedora foi: %s com a Soma de Atributos de: %.2f\n", cidade1, resu_carta1);
        } else if (resu_carta1 < resu_carta2){
            printf("A Carta Vencedora foi: %s com a Soma de Atributos de: %.2f\n", cidade2, resu_carta2);                
        } else {
            printf("Houve um Empate!!");
        }
    
        return 0;
    }

   
    
    
    
    //AREA DO CODIGO DESATIVADA APOS IMPLEMENTACAO DO SWITCH
    
    // //Densidade Populacional e PIB per Capita
    // densidade1 = populacao1 / areakm1;
    // densidade2 = populacao2 / areakm2;
    // percapita1 = pib1 / populacao1;
    // percapita2 = pib2 / populacao2;

    // //Inverso da Densidade
    // inversodensidade1 = 1.0 / densidade1;
    // inversodensidade2 = 1.0 / densidade2;

    //Super Poder Cartas
    // superpoder1 = populacao1 + pib1 + areakm1 + pontosturisticos1 + percapita1 + inversodensidade1;    
    // superpoder2 = populacao2 + pib2 + areakm2 + pontosturisticos2 + percapita2 + inversodensidade2;
    

    
    // // // //Exibição da Carta 1 <- desativado apos a implementação do switch
    // // printf("Carta 1\n");
    // // printf("Seu Estado é: %s\n", estado1);
    // // printf("O Código é: %s\n", idcarta);
    // // printf("Nome da Cidade: %s\n", cidade1);
    // // printf("População: %f\n", populacao1);
    // // printf("Esta Cidade Tem: %.2f km²\n", areakm1);
    // // printf("PIB: %.2f Bilhões de Reais\n", pib1);
    // // printf("Pontos Turisticos: %d\n", pontosturisticos1);
    // // printf("A Densidade Populacional e %.2f hab/km²: \n", densidade1);
    // // printf("PIB per Capita: %.2f\n", percapita1);
    // // printf("Densidade Invertida: %.2f\n", inversodensidade1);
    // // printf("SUPER PODER!: %.2f\n", superpoder1);


    // // // //Exibição da Carta 2 <- desativado apois implementação do switch
    // // printf("Carta 2\n");
    // // printf("Seu Estado é: %s\n", estado2);
    // // printf("O Código é: %s\n", idcarta2);
    // // printf("Nome da Cidade: %s\n", cidade2);
    // // printf("População: %.2f\n", populacao2);
    // // printf("Esta Cidade Tem: %.2f km²\n", areakm2);
    // // printf("PIB: %.2f Bilhões de Reais\n", pib2);
    // // printf("Pontos Turisticos: %d\n", pontosturisticos2);
    // // printf("A Densidade Populacional e %.2f hab/km²: \n", densidade2);
    // // printf("PIB per Capita: %.2f\n", percapita2);
    // // printf("Densidade Invertida: %.2f\n", inversodensidade2);
    // // printf("SUPER PODER!: %.2f\n", superpoder2);

    // //Comparacoes Cartas
    // resultadopopulacao = populacao1 >= populacao2;
    // resultadoarea = areakm1 >= areakm2;
    // resultadopib = pib1 >= pib2;
    // resultadopontosturisticos = pontosturisticos1 >= pontosturisticos2;
    // resultadodensidade = densidade1 >= densidade2;
    // resultadopercapita = percapita1 >= percapita2;
    // resultadoinverso = inversodensidade1 <= inversodensidade2;
    // resultadopoder = superpoder1 >= superpoder2;

    // // //Exibicao dos Resultados
    // printf("Hora da Verdade, Vamos Comparar as Cartas do Super Trunfo\n");
    // printf("Se o Resultado for 1 a Carta 1 foi Vencedor, caso for 0 a Carta 2 foi Vendora\n");
    // printf("Boa sorte!\n");
    // printf("Vencedor Populacao e: %d \n", resultadopopulacao);
    // printf("Vencedor Areakm² e: %d \n", resultadoarea);
    // printf("Vencedor PIB e: %d \n", resultadopib);
    // printf("Vencedor Pontos Turisticos e: %d \n", resultadopontosturisticos);
    // printf("Vencedor Densidade e: %d \n", resultadodensidade);
    // printf("Vencedor PIB Per Capita e: %d \n", resultadopercapita);
    // printf("Vencedor Densidade Inversa e: %d \n", resultadoinverso);
    // printf("Vencedor SUPER PODER! e: %d \n", resultadopoder);

    // //Comparacao das Cartas usando IF/ELSE

    // printf("Vamos aos Resultados \n");
    // if (populacao1 > populacao2){
    //     printf("%s foi a vencedora no Atributo População, com a População Estimada em: %.2f\n", cidade1, populacao1);
    // } else {
    //     printf("%s foi a vencedora no Atributo População, com a População Estimada em: %.2f\n", cidade2, populacao2);
    // }
    // if (areakm1 > areakm2){
    //     printf("%s foi a vencedora no Atributo Area (km²), com a Area de: %.2f (km²)\n", cidade1, areakm1);
    // } else {
    //     printf("%s foi a vencedora no Atributo Area (km²), com a Area de: %.2f (km²)\n", cidade2, areakm2);
    // }
    // if (pib1 > pib2){
    //     printf("%s foi a vencedora no Atributo PIB, com o PIB Estimado em: %.2f\n", cidade1, pib1);
    // } else {
    //     printf("%s foi a vencedora no Atributo PIB, om o PIB Estimado em: %.2f \n", cidade2, pib2);
    // }
    // if (pontosturisticos1 > pontosturisticos2){
    //     printf("%s foi a vencedora em Postos Turisticos, com a quantidade de: %d Pontos Turisticos\n", cidade1, pontosturisticos1);
    // } else {
    //     printf("%s foi a vencedora em Postos Turisticos, com a quantidade de: %d Pontos Turisticos\n", cidade2, pontosturisticos2);
    // }
    // if (densidade1 < densidade2){
    //     printf("%s foi a vencedora no Atributo Densidade Populacional, com a Densidade Populacional de: %.2f\n", cidade1, densidade1);
    // } else {
    //     printf("%s foi a vencedora no Atributo Densidade Populacional, com a Densidade Populacional de: %.2f\n", cidade2, densidade2);
    // }
    // if (percapita1 < percapita2){
    //     printf("%s foi a vencedora no Atributo PIB per Capita, com o PIB per Capita sendo: %.2f\n", cidade1, percapita1);
    // } else {
    //     printf("%s foi a vencedora no Atributo PIB per Capita, com o PIB per Capita sendo: %.2f\n", cidade2, percapita2);
    // }


    
    





