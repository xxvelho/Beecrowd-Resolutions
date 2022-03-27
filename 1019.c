/*
  autor: Elivelton Bouteille;
  nome: 1019 - Conversão de Tempo;
*/

#include <stdio.h>

int main(void) {
  int i, seg, min, h;
  scanf("%d", &seg);
  
  h = seg / 3600;
  seg-=(3600*h);

  min = seg / 60;
  seg-=(60*min);

  printf("%d:%d:%d\n", h,min,seg);
  
  return 0;
}
