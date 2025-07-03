#include <stdio.h>

int main(){
  //declarando as variaveis
  int t = 1, b = 1, r, c = 1;

  printf("\n*** Movimentando as peças do xadrez ***\n");

  // estrutura para movimentar a torre
  printf("\nTorre - Move-se para a direita 5 vezes...\n");
  while (t <= 5){
    printf("-> Direita ");
    t++;
  }

  printf("\n");

  // estrutura para movimentar o bispo
  printf("\nBispo - Move-se na diagonal para cima e à direita 5 vezes...\n");
  do{
    printf("↑→ Cima, direita\n");
    b++; 
  } while (b <= 5);
  
  // estrutura para movimentar a rainha
  printf("\nRainha - Move-se para a esquerda 8 vezes...\n");
  for (r = 8; r >= 1 ; r--){
    printf(" <- Esquerda");
  }

  printf("\n-------------------------------------------------------------------------------------------------");

  // estrutura para movimentar o cavalo
  printf("\nCavalo - Move-se em L, para baixo 2 vezes e para a esquerda 1 vez...\n");
  while (c--){
    for (int m = 1; m <= 2; m++){
      printf("↓ Baixo\n");
    }

    printf("<- Esquerda\n");
  }

  printf("-------------------------------------------------------------------------------------------------\n");

  return 0;
}