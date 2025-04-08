#include <stdio.h>

#define TAMANHO_TABULEIRO 10
#define TAMANHO_HABILIDADE 5

void aplicar_habilidade(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int habilidade[TAMANHO_HABILIDADE][TAMANHO_HABILIDADE], int origem_linha, int origem_coluna) {
    // Sobrepõe a matriz de habilidade ao tabuleiro
    for (int i = 0; i < TAMANHO_HABILIDADE; i++) {
        for (int j = 0; j < TAMANHO_HABILIDADE; j++) {
            int linha_tabuleiro = origem_linha + i - TAMANHO_HABILIDADE / 2;
            int coluna_tabuleiro = origem_coluna + j - TAMANHO_HABILIDADE / 2;

            // Verifica se a posição está dentro dos limites do tabuleiro
            if (linha_tabuleiro >= 0 && linha_tabuleiro < TAMANHO_TABULEIRO &&
                coluna_tabuleiro >= 0 && coluna_tabuleiro < TAMANHO_TABULEIRO) {
                if (habilidade[i][j] == 1) {
                    tabuleiro[linha_tabuleiro][coluna_tabuleiro] = 5; // Marca a área afetada
                }
            }
        }
    }
}

int main() {
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];

    // Inicializa o tabuleiro com zeros (representando água)
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Posiciona os navios no tabuleiro
    int navio_horizontal1_linha = 2, navio_horizontal1_coluna = 4;
    for (int i = 0; i < 3; i++) {
        tabuleiro[navio_horizontal1_linha][navio_horizontal1_coluna + i] = 3;
    }

    int navio_vertical1_linha = 5, navio_vertical1_coluna = 7;
    for (int i = 0; i < 3; i++) {
        tabuleiro[navio_vertical1_linha + i][navio_vertical1_coluna] = 3;
    }

    int navio_diagonal1_linha = 0, navio_diagonal1_coluna = 0;
    for (int i = 0; i < 3; i++) {
        tabuleiro[navio_diagonal1_linha + i][navio_diagonal1_coluna + i] = 3;
    }

    int navio_diagonal2_linha = 7, navio_diagonal2_coluna = 9;
    for (int i = 0; i < 3; i++) {
        tabuleiro[navio_diagonal2_linha + i][navio_diagonal2_coluna - i] = 3;
    }

   
    int cone[TAMANHO_HABILIDADE][TAMANHO_HABILIDADE] = {0};
    for (int i = 0; i < TAMANHO_HABILIDADE; i++) {
        for (int j = TAMANHO_HABILIDADE / 2 - i; j <= TAMANHO_HABILIDADE / 2 + i; j++) {
            if (j >= 0 && j < TAMANHO_HABILIDADE) {
                cone[i][j] = 1;
            }
        }
    }

   
    int cruz[TAMANHO_HABILIDADE][TAMANHO_HABILIDADE] = {0};
    for (int i = 0; i < TAMANHO_HABILIDADE; i++) {
        cruz[i][TAMANHO_HABILIDADE / 2] = 1; 
        cruz[TAMANHO_HABILIDADE / 2][i] = 1; 
    }

    // Define a matriz de habilidade Octaedro
    int octaedro[TAMANHO_HABILIDADE][TAMANHO_HABILIDADE] = {0};
    for (int i = 0; i < TAMANHO_HABILIDADE; i++) {
        for (int j = TAMANHO_HABILIDADE / 2 - i; j <= TAMANHO_HABILIDADE / 2 + i; j++) {
            if (j >= 0 && j < TAMANHO_HABILIDADE) {
                octaedro[i][j] = 1;
                octaedro[TAMANHO_HABILIDADE - i - 1][j] = 1;
            }
        }
    }

    // Aplica as habilidades no tabuleiro
    aplicar_habilidade(tabuleiro, cone, 4, 4); 
    aplicar_habilidade(tabuleiro, cruz, 6, 6); 
    aplicar_habilidade(tabuleiro, octaedro, 8, 2); 

    printf("TABULEIRO BATALHA NAVAL \n");
    printf("   ");
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        printf(" %c ", linha[i]);
    }
    printf("\n");

   
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        printf("%2d ", i + 1);
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            if (tabuleiro[i][j] == 0) {
                printf(" ~ "); // Água
            } else if (tabuleiro[i][j] == 3) {
                printf(" N "); // Navio
            } else if (tabuleiro[i][j] == 5) {
                printf(" * "); // Área de habilidade
            }
        }
        printf("\n");
    }

    return 0;
}
