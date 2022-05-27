/*
  autor: Elivelton Bouteille;
  nome: 1181 - Linha na Matriz;
*/

#include <stdio.h>
#define TAM 12

int main(void) {
  int i, j, linha;
  char op;
  double M[TAM][TAM], soma = 0.0, media;
  scanf("%d %c", &linha, &op);
  
  for(i=0; i<TAM; i++){
    for(j=0; j<TAM; j++){
      scanf("%lf", &M[i][j]);
      if(i==linha)
        soma += M[i][j];
    }
  }

  if(op=='S'){
    printf("%.1lf\n", soma);
  }
  else if(op=='M'){
    media = soma/TAM;
    printf("%.1lf\n", media);
  }
  
  return 0;
}
