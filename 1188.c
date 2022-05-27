/*
  autor: Elivelton Bouteille;
  nome: 1188 - Área Inferior;
*/

#include <stdio.h>
#define TAM 12

int main(void) {
  int i, j;
  char op;
  double M[TAM][TAM], soma = 0.0, mult=1.0;
  scanf("%c", &op);
  for(i=0; i<TAM; i++)
  for(j=0;j<TAM; j++)
    scanf("%lf", &M[i][j]);

  if(op=='S'){
    for(i=0; i<TAM; i++){
      for(j=0; j<TAM; j++){
        if(i>j && j>TAM-i-1){
          soma+=M[i][j];
        }
      }
    }
    printf("%.1lf\n", soma);
  }
  else if(op=='M'){
    for(i=0; i<TAM; i++){
      for(j=0; j<TAM; j++){
        if(i>j && j>TAM-i-1){
          mult*=M[i][j];
        }
      }
    }
    printf("%.1lf\n", mult);
  }
  
  return 0;
}
