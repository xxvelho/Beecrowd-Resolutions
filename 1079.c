/*
  autor: Elivelton Bouteille;
  nome: 1079 - Médias Ponderadas;
*/


#include <stdio.h>

int main (){

  int n, i;
  double a,b,c, media;

  scanf("%d", &n);

  for(i=0; i<n;i++){
    scanf("%lf %lf %lf", &a, &b, &c);

    media = ((a*2+b*3+c*5)/10);

    printf("%.1lf\n", media);
  }
  
  return 0;
}
