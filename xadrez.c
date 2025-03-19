#include <stdio.h>

int main() {
    // Declaração das variáveis
    int i, j, k;
    
    // Explicação inicial para o usuário
    printf("Bem-vindo ao simulador de movimentos de xadrez!\n");
    printf("Vamos simular os movimentos de três peças: Torre, Bispo e Rainha.\n\n");

    // Movimento da Torre (5 casas para a direita)
    printf("Movimento da Torre (5 casas para a direita):\n");
    printf("A Torre move-se apenas para a direita, uma casa de cada vez.\n");

    // Usando 'for' para simular o movimento da Torre
    for (i = 0; i < 5; i++) {
        printf("Movendo-se para a direita: Casa %d\n", i + 1);
    }

    // Movimento do Bispo (5 casas na diagonal para cima e à direita)
    printf("\nMovimento do Bispo (5 casas na diagonal para cima e à direita):\n");
    printf("O Bispo se move na diagonal, uma casa para cima e à direita por vez.\n");

    // Usando 'while' para simular o movimento do Bispo
    j = 0;
    while (j < 5) {
        printf("Movendo-se para Cima Direita: Diagonal %d\n", j + 1);
        j++;
    }

    // Movimento da Rainha (8 casas para a esquerda)
    printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
    printf("A Rainha pode se mover em várias direções, neste caso vamos mover para a esquerda.\n");

    // Usando 'do-while' para simular o movimento da Rainha
    k = 0;
    do {
        printf("Movendo-se para a esquerda: Casa %d\n", k + 1);
        k++;
    } while (k < 8);

    // Finalizando o programa
    printf("\nSimulação completa! As peças realizaram seus movimentos com sucesso.\n");

    return 0;
}
