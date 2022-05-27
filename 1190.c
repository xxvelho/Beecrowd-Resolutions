/*
  autor: Elivelton Bouteille;
  nome: 1190 - Área Direia;
*/

#include <stdio.h>
#define TAM 12

int main(void) {
  int i, j;
  char op;
  double M[TAM][TAM], soma = 0.0, media;
  scanf("%c", &op);
  for(i=0; i<TAM; i++)
  for(j=0;j<TAM; j++)
    scanf("%lf", &M[i][j]);

  for(i=0; i<TAM; i++){
    for(j=0; j<TAM; j++){
      if(i<j && j>TAM-i-1){
        soma+=M[i][j];
      }
    }
  }
  
  if(op=='S'){
    printf("%.1lf\n", soma);
  }
  else if(op=='M'){
    media = soma /66.0;
    printf("%.1lf", media);
  }
  
  return 0;
}
