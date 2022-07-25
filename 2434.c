//2434 - Saldo do Vovô 

#include <stdio.h>

int main (void){
  int dias, saldo_inicial, temp;
  scanf("%d %d", &dias, &saldo_inicial);
  int menor_saldo = saldo_inicial;
  
  for(int i=0; i<dias; i++){
    scanf("%d", &temp);
    saldo_inicial += temp;
    if(saldo_inicial < menor_saldo){
      menor_saldo = saldo_inicial;
    }
  }
  printf("%d\n", menor_saldo);

return 0;
}
