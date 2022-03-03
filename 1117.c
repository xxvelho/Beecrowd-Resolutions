/*
  autor: Elivelton Bouteille;
  nome: 1117 - Validação de Nota;
*/

#include <stdio.h>

int main () {
  float a,b, media;
  scanf("%f", &a);

  while(a < 0 || a > 10){
    printf("nota invalida\n");
    scanf("%f", &a);
  }
  scanf("%f", &b);
  while(b <0 || b>10){
    printf("nota invalida\n");
    scanf("%f", &b);
  }
 
  media = ((a+b)/2);
  printf("media = %.2f\n", media);
  
return 0;
}
