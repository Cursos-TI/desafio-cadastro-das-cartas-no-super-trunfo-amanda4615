#include <stdio.h>

// Função recursiva para movimento da Torre para cima
void moverTorreCima(int casas) {
    if (casas <= 0) return;
    printf("Cima\n");
    moverTorreCima(casas - 1);
}

// Função recursiva para movimento da Torre para a direita
void moverTorreDireita(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorreDireita(casas - 1);
}

// Função recursiva para movimento da Rainha (cima e direita)
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Cima\n");
    printf("Direita\n");
    moverRainha(casas - 1);
}

// Função recursiva para movimento do Bispo (diagonal)
void moverBispo(int casas) {
    if (casas <= 0) return;
    printf("Diagonal (Cima e Direita)\n");
    moverBispo(casas - 1);
}

// Movimento do Cavalo com loops aninhados (duas para cima e uma para a direita)
#include <stdio.h>

void moverCavalo() {
    int movimentos = 3; // quantidade de movimentos simulados

    for (int i = 0; i < movimentos; i++) {
        for (int j = 0; j < 2; j++) {  // loop para o movimento "para cima"
            if (j == 1) {
                printf("Cima\n");
            }
        }

        for (int k = 0; k < 1; k++) {  // loop para o movimento "para a direita"
            printf("Direita\n");
        }

        printf("\n");  // separa os movimentos
    }
}





// Loops aninhados para o bispo
void moverBispoLoops() {
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= 4; j++) {
            if (i == j) {
                printf("Diagonal com loops: Cima e Direita (%d,%d)\n", i, j);
            }
        }
    }
}

int main() {
    int casasTorre = 3;
    int casasRainha = 2;
    int casasBispo = 3;

    printf("Movimento da Torre para cima:\n");
    moverTorreCima(casasTorre);

    printf("\nMovimento da Torre para direita:\n");
    moverTorreDireita(casasTorre);

    printf("\nMovimento da Rainha (Cima e Direita):\n");
    moverRainha(casasRainha);

    printf("\nMovimento do Bispo (Recursivo):\n");
    moverBispo(casasBispo);

    printf("\nMovimento do Bispo com loops aninhados:\n");
    moverBispoLoops();

    printf("\nMovimento do Cavalo:\n");
    moverCavalo();

    return 0;
}





 
  
  

  



  
  



  
