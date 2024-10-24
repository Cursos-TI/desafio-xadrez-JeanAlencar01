#include <stdio.h>

int main(){
    int i = 0;
    int movimentoBispo = 5;
    int movimentoTorre = 5;
    int movimentoRainha = 8;

    // movimentar bispo (for)
    printf("Movimentando Bispo...\n");
    for (i = 1; i < movimentoBispo; i++) {
        printf("Bispo: Diagonal superior direita %d casas(s)\n", i);
    }
    
    // movimentar Torre (while)
    printf("\nMovimentando Torre...\n");
    i = 1;
    while (i <= movimentoTorre) {
        printf("Torre: Direita %d casa(s)\n", i);
        i++;
    }
    
    // movimentar Rainha (do-while)
    printf("\nMovimentando Rainha...\n");
    i = 1;
    do {
        printf("Rainha: Esquerda %d casa(s)\n", i);
        i++;
    } while (i <= movimentoRainha);

    return 0;
}