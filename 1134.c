//1134 - Tipo de Combustível

#include <stdio.h>

int main(){
  int num;
  int alcool = 0;
  int gasolina = 0;
  int disel = 0;
  
  do{
    scanf("%d", &num);
    if(num == 1)
      alcool++;
    if(num == 2)
      gasolina++;
    if(num == 3)
      disel++;
  }while(num != 4);
  
  printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", alcool, gasolina, disel);
  
  return 0;
}
