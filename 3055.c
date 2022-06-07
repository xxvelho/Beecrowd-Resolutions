/*
  autor: Elivelton Bouteille;
  nome: 3055 - Nota Esquecida;
*/

#include <stdio.h>

int main(void){
  int nota, media, nota2;
  scanf("%d %d", &nota, &media);

  nota2 = (media*2) - nota;
  
  printf("%d\n", nota2);

  return 0;
}
