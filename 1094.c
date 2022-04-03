/*
  autor: Elivelton Bouteille;
  nome: 1094 - Experiências;
*/


#include <stdio.h>

int main (){

  int n, i, num;
  char tipo;
  int cobaias = 0, coelhos = 0, ratos = 0, sapos = 0;
  float per_coelhos, per_ratos, per_sapos;

  
  scanf("%d", &n);

  for(i=0; i<n;i++){
    scanf("%d %c", &num, &tipo);
    cobaias+=num;
    if(tipo == 'C'){
      coelhos+=num;
    }
    else if(tipo == 'R'){
      ratos+=num;
    }
    else{
      sapos+=num;
    }
  }

  printf("Total: %d cobaias\n", cobaias);
  printf("Total de coelhos: %d\n", coelhos);
  printf("Total de ratos: %d\n", ratos);
  printf("Total de sapos: %d\n", sapos);

  per_coelhos = ((coelhos*100)/(double)cobaias);
  per_ratos = ((ratos*100)/(double)cobaias);
  per_sapos = ((sapos*100)/(double)cobaias);

  printf("Percentual de coelhos: %.2f %%\n", per_coelhos);
  printf("Percentual de ratos: %.2f %%\n", per_ratos);
  printf("Percentual de sapos: %.2f %%\n", per_sapos);
  
  return 0;
}
