#include <stdio.h>

void moverbispo(int bispo)
{
    if(bispo > 0)
    {
        printf("Cima\n");
        printf("Esquerda\n");
        moverbispo(bispo -1);
    }
} 

void moverdireita(int direita)
{
    if(direita > 0)
    {
        printf("Direita\n");
        moverdireita(direita -1);
    }
} 

void moveresquerda(int esquerda)
{
    if(esquerda > 0)
    {
        printf("Esquerda\n");
        moveresquerda(esquerda -1);
    }
} 

void movercima(int cima)
{
    if(cima > 0)
    {
        printf("Cima\n");
        movercima(cima -1);
    }
} 


int main() {

    int cavalo = 0;
    int casas = 0;
    int i;
    int j;

    // Implementação de Movimentação do Bispo
    do
    {
        printf("Quantas casas o Bispo deve se mover: ");
        scanf("%d", &casas);
    } 
    while (casas < 0 && casas > 5);

    for(int i = 1 ; i < casas; i++)
    {
        moverbispo(casas);
    }

    // Implementação de Movimentação da Torre
    do
    {
        printf("Quantas casas a Torre deve se mover: ");
        scanf("%d", &casas);
    } 
    while (casas<0 && casas > 5);
    
    for(i = 0; i < casas; i++)
    {
        movercima(casas);
        break;
    }


    // Implementação de Movimentação da Rainha
    do
    {
        printf("Quantas casas a Rainha e deve se mover: ");
        scanf("%d", &casas);
    } 
    while (casas < 0 && casas > 8);

    for(i = 0; i < casas; i++)
    {
        moveresquerda(casas);
        break;
    }

    
    //Movimentação do Cavalo p/ baixo e esquerda
    do
    {
        printf("Digite 2 p/ cavalo se mover: ");
        scanf("%d", &cavalo);
    } 
    while (cavalo != 2);
    
    for(int i = 1 ; i <= 1; i++)
    {
        for(int j = 0; j < cavalo; j++)
        {
            movercima(cavalo);
            break;
        }
    moverdireita(i);
    break;
    }

    return 0;
}
