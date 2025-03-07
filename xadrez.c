#include <stdio.h>

int main() {
    int bispo = 0, torre = 0, rainha, cavalo = 0, escolha;

    printf("♝♜♛♞ Movimento das peças de Xadrez ♞♛♜♝\n");
    printf("\nEscolha qual peça deseja mover:\n");
    printf("\n1. Bispo ♝\n");
    printf("2. Torre ♜\n");
    printf("3. Rainha ♛\n");
    printf("4. Cavalo ♞\n");
    printf("Escolha o número da peça:\n");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:
     // Implementação de Movimentação do Bispo
        printf("\nMovimento do Bispo ♝ :\n");

        while (bispo < 5)
        {
            printf("Cima\n");
            printf("Direita\n");
            bispo++;
        }
        
        break;

    case 2:
        // Implementação de Movimentação da Torre
        printf("\nMovimento da Torre ♜ :\n");

        do
        {
            printf("Direita\n");
            torre++;
        } while (torre < 5);

        break;

    case 3:
    // Implementação de Movimentação da Rainha
        printf("\nMovimento da Rainha ♛ :\n");

        for (rainha = 0; rainha < 8; rainha++)
        {
            printf("Direita\n");
        }

        break;

    case 4:
    // Implementação de Movimento do Cavalo
        printf("\nMovimento do Cavalo ♞\n");

        for (cavalo; cavalo <= 1; cavalo++)
        {
            while (cavalo < 2)
            {
                printf("Baixo\n");
                cavalo++;
            }
            printf("Esquerda\n");
        }

        break;
    
    default:    printf("\nOpção inválida, por favor insira um número de 1 a 4\n");
        break;
    }
    

    return 0;
}
