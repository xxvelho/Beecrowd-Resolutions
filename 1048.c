/*
  autor: Elivelton Bouteille;
  nome: 1048 - Aumento de Salário;
*/

#include <stdio.h>

int main() {
  float din, ganho, total;
  int percentual;

  scanf("%f", &din);

  if(din <= 400){
    percentual = 15;
    ganho = (din * ((float)percentual/100));
    total = din + ganho;
    }
  else if(din <= 800){
    percentual = 12;
    ganho = (din * ((float)percentual/100));
    total = din + ganho;
    }
  else if(din <= 1200){
    percentual = 10;
    ganho = (din * ((float)percentual/100));
    total = din + ganho;
    }
  else if(din <= 2000){
    percentual = 7;
    ganho = (din * ((float)percentual/100));
    total = din + ganho;
    }
  else{
    percentual = 4;
    ganho = (din * ((float)percentual/100));
    total = din + ganho;
    }

  printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n", total, ganho, percentual);

  return 0;
}
