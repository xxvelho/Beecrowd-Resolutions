//1155 - Sequência S

#include <stdio.h>

int main (){
  double soma = 0.0, aux;
  
  for(double i=1.0; i<=100.0; i++){
    aux = 1.0/i;
    soma += aux;
  }
  printf("%.2lf\n", soma);
  
  return 0;
}
