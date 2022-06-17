// 1080 - Maior e Posição;

#include <stdio.h>

int main () {
  int i, num, maior = 0, posicao;

  for(i=1; i<=100;i++){
    scanf("%d", &num);
    if(maior < num){
      maior = num;
      posicao = i;
    }
  }
  printf("%d\n%d\n", maior, posicao);

  return 0;
}
