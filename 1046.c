/*
  autor: Elivelton Bouteille;
  nome: 1046 - Tempo de Jogo;
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int a,b, horas;
  scanf("%d %d", &a, &b);

  if(a==b){
    printf("O JOGO DUROU 24 HORA(S)\n");
  }
  else{
    horas = (abs(24-a)+b);
    if(horas>24){
      horas = abs(24-horas);
    }
    printf("O JOGO DUROU %d HORA(S)\n", horas);
  }

  return 0;
}
