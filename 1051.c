/*
  autor: Elivelton Bouteille;
  nome: 1051 - Imposto de Renda;
*/

#include <stdio.h>

int main() {
  float din, total = 0;
  scanf("%f", &din);

  if(din<=2000){
    printf("Isento\n");
  }
  else if(din <= 3000){
    din -=2000;
    total = (din * 0.08);
    printf("R$ %.2f\n", total);
  }
  else if(din <= 4500){
    din -=3000;
    total = (1000 * 0.08) + (din * 0.18);
    printf("R$ %.2f\n", total);
  }
  else if(din > 4500){
    din -=4500;
    total = (1000 * 0.08) + (1500 * 0.18) + (din * 0.28);
    printf("R$ %.2f\n", total);
  }
  
  return 0;
}
