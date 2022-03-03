/*
  autor: Elivelton Bouteille;
  nome: 1154 - Idades;
*/

#include <stdio.h>

int main () {
  int soma=0, div=0, idade;
  float media;

  while(1){
    scanf("%d", &idade);
    if(idade>0){
    soma += idade;
    div++;
    }
    else{
      break;
    }
  }
  
  media = (float) soma / div;
  printf("%.2f\n", media);
  
return 0;
}
