//3170 - Bolinhas de Natal

#include <stdio.h>

int main (){
  int bolinhas, galhos, metade;
  scanf("%d %d", &bolinhas, &galhos);
  
  metade = galhos/2;
  if(bolinhas >= metade){
    printf("Amelia tem todas bolinhas!\n");
  }
  else{
    metade -= bolinhas;
    printf("Faltam %d bolinha(s)\n", metade);
  }
  
  return 0;
}
