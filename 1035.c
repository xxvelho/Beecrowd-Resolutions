/*
  autor: Elivelton Bouteille;
  nome: 1035 - Teste de Seleção 1;
*/

#include <stdio.h>

int main() {

  int A,B,C,D;
  scanf("%d %d %d %d", &A, &B, &C, &D);

  if(B>C && D>A && (C+D)>(A+B) && C>0 && D>0 && (A%2==0)){
    printf("Valores aceitos\n");
  }
  else{
    printf("Valores nao aceitos\n");
  }
  
  return 0;
}