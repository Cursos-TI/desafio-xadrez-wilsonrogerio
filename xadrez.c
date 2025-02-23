#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
       //movimento da torre
       int x = 0;
       do
       {   
           printf("Torre - Diretira\n");
           x++;  
           /* code */
       } while (x < 5);
       printf("\n");
       
       //movimento do bispo
       int y = 0;
       while (y < 5)
       {
           printf("Bispo - Cima,Direita\n");
           y++;
       }
       printf("\n");
   
       // movimento da rainha
       int i = 0;
       for ( i = 0; i < 8; i++)
       {
           printf("Rainha - Esquerda\n");
       }
       
       printf("\n");
       // movimento do cavalo
      do
      {
       for ( i = 0; i < 2; i++)
       {
           printf("Cavalo - Cima\n");
       }
       printf("Cavalo - Direita\n");
      
      } while (i < 1);
      return 0;
}
