#include <stdio.h>

// estrutura recursiva para movimentar a torre
void torre(int t){
  if(t > 0){
    printf("-> Direita ");
    torre(t - 1);
  }
}

// estrutura recursiva com loops aninhados para movimentar o bispo
void bispo(int b1, int b2){
  for (b1 = 0; b1 < 5; b1++){
    printf("↑ Cima");
    for (b2 = 0; b2 < 1; b2++){
      printf(" -> Direita\n");
    }
  }
}

// estrutura recursiva para movimentar a rainha
void rainha(int r){
  if(r > 0){
    printf(" <- Esquerda");
    rainha(r - 1);
  }
}

int main(){
  //declarando as variaveis
  int t = 5, b1, b2, r = 8, c = 2;

  printf("\n*** Movimentando as peças do xadrez ***\n");

  //chamando a recursiva da torre
  printf("\nTorre - Move-se para a direita 5 vezes...\n");
  torre(t);

  printf("\n");

  //chamando a recursiva do bispo
  printf("\nBispo - Move-se na diagonal para cima e à direita 5 vezes...\n");
  bispo(b1, b2);

  //chamando a recursiva da rainha
  printf("\nRainha - Move-se para a esquerda 8 vezes...\n");
  rainha(r);

  printf("\n-------------------------------------------------------------------------------------------------");

  // estrutura para movimentar o cavalo
  printf("\nCavalo - Move-se em L, para cima 2 vezes e para a direita 1 vez...\n");
  while (c != 0){
    for (int m = 1; m <= 2; m++){
      printf("↑ Cima\n");  
      c--;
    }
    printf("-> Direita\n");
    break;
  }
  

  printf("-------------------------------------------------------------------------------------------------\n");

  return 0;
}