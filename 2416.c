//2416 - Corrida

#include <stdio.h>

int main(){
  int qtd_metros, compriment_pista;
  scanf("%d %d", &qtd_metros, &compriment_pista);
   
  while (qtd_metros>=0){
    qtd_metros-=compriment_pista;
  }

  printf("%d\n", qtd_metros+compriment_pista);
   
  return 0;
}
