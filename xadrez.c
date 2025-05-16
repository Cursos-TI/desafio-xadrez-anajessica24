#include <stdio.h>


int main() {
    // Nível Novato - Movimentação das Peças
    int bispo = 0;
    int rainha = 0;
    int torre = 0;
    // Implementação de Movimentação do Bispo
    do
    {
        printf("Escolha entre 1 e 5:\n");
        printf("Quantas casas a bispo se move? ");
        scanf("%d", &bispo);
    } 
    while (bispo < 1 || bispo > 5);
    
    for(int i=0; i < bispo; i++)
    {
        for(int j=0; j < bispo; j++)
        {
            if(j == bispo - i - 1)
            {
                printf("/");
            }
            else
                printf(" ");
        }
        printf("\n");
    }

    // Implementação de Movimentação da Torre

    do
    {
        printf("Escolha entre 1 e 5:\n");
        printf("Quantas casas a torre se move? ");
        scanf("%d", &torre);
    } 
    while (torre < 1 || torre > 5);
    
    for(int i=0; i < torre; i++)
    {
        printf("^\n");
    }


    // Implementação de Movimentação da Rainha
    do
    {
        printf("Escolha entre 1 e 8:\n");
        printf("Quantas casas a rainha se move? ");
        scanf("%d", &rainha);
        printf("Rainha:\n");
    } 
    while (rainha < 1 || rainha > 8);
    
    for(int i=0; i < rainha; i++)
    {
        printf("<-");
    }
    printf("\n");

    return 0;

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
