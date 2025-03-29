#include <stdio.h>

void recursivo_torre(int move_torre){
    if (move_torre <= 5){
        if (move_torre ==1){
        printf("Movendo %d casa para a Direita! \n", move_torre);
        } else{
        printf("Movendo %d casas para a Direita! \n", move_torre);
        }
        recursivo_torre(move_torre + 1); // a utilizacao do if e else em cada funcao se dar por conta que eu 
                                         // queria que o primeiro movimento fosse no singular entao movendo 1 casa
                                         // e os demais no plural casas, para que ficasse algo mais interessante e correto.
                                         // e aplicar esse detalhe, no inicio um tanto complicado, me ajudou a entender melhor
                                         // e fixar melhor a aplicao de if e else.
    }
}
void recursivo_bispo(int move_bispo){
    if (move_bispo <= 5){
        if (move_bispo == 1){
        printf("Movendo %d casa na diagonal (cima, direita)! \n", move_bispo); 
        } else{
        printf("Movendo %d casas na diagonal (cima, direita)! \n", move_bispo); 
        }
        recursivo_bispo(move_bispo + 1);
    }   
} 
void recursivo_rainha(int move_rainha){
    if (move_rainha <= 8){
        if (move_rainha == 1){
        printf("Movendo %d casa para a Esquerda! \n", move_rainha);        
    } else{
        printf("Movendo %d casas para a Esquerda! \n", move_rainha);        
    } 
        recursivo_rainha(move_rainha + 1);        
}  
}
void move_cavalo() {
    printf("Movimentacao do Cavalo! \n");
    for (int cima = 1; cima <= 2; cima++) {
        if (cima == 1){
            printf("Cavalo moveu %d casa para Cima!\n", cima);
        } else {
            printf("Cavalo moveu %d casas para Cima!\n", cima);
        }       
        if (cima == 2) { // Após o segundo movimento para cima, move para a direita
            for (int direita = 1; direita <= 1; direita++) { // Loop para o movimento para a direita
                if (direita == 1) {
                    printf("Cavalo moveu %d casa para a Direita!\n", direita);
                } else {
                    continue; // Não necessário aqui, mas demonstra controle de fluxo
                }
                break; // Sai do loop interno após o movimento
            }
        }
    }
}
void bispo_com_loops(int move_vertical, int move_horizontal) {
    if (move_vertical <= 5) { 
        printf("Bispo moveu %d casa(s) para Cima!\n", move_vertical);

        for (int horizontal = 1; horizontal <= move_horizontal; horizontal++) { // Loop interno para o movimento horizontal
            printf("Bispo moveu %d casa(s) para a Direita!\n", horizontal);
        }

        // Chamada recursiva para o próximo movimento vertical
        bispo_com_loops(move_vertical + 1, move_horizontal + 1);
    }
}
 
int main(){
    int move_torre = 1;
    int move_bispo = 1;
    int move_rainha = 1;

    printf("Movimentacao da Torre! \n");
    recursivo_torre(move_torre);

    printf("\nMovimentacao do Bispo! \n");
    recursivo_bispo(move_bispo);

    printf("\nMovimentacao da Rainha! \n");
    recursivo_rainha(move_rainha);

    printf("\nMovimentacao do Bispo! \n");
    bispo_com_loops(1, 1); // Chamada da função com loops aninhados

    printf("\n"); //aqui é somente para quebrar a linha no terminal e ficar visualmente organizado
    move_cavalo(); //a chamada aqui do cavalo, se dar por conta que o mesmo tem um movimento o uso do loop for
                   // e o mesmo não se encaixa na proposta de recursividade, mas foi feita a chamada funcao.


    return 0;
}
