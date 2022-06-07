/*
  autor: Elivelton Bouteille;
  nome: 2936 - Quanta Mandioca?;
*/

#include <stdio.h>

int main(void){
  int i, porcoes, soma = 225;
  int gramas[] = {300, 1500, 600, 1000, 150};
  
  for(i=0; i<5; i++){
    scanf("%d", &porcoes);
    soma += (porcoes * gramas[i]);
  }

  printf("%d\n", soma);
  
  return 0;
}
