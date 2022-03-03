/*
  autor: Elivelton Bouteille;
  nome: 1197 - Volta à Faculdade de Física;
*/

#include <stdio.h>

int main () {

  int v, t,deslocamento;

  while(scanf("%d %d", &v, &t) != EOF){
    deslocamento = (2*t*v);
    printf("%d\n", deslocamento);
    
  }

return 0;
}
