/*
  autor: Elivelton Bouteille;
  nome: 1114 - Senha Fixa;
*/

#include <stdio.h>

int main(){
int senha;
  
scanf("%d", &senha);

while(senha!=2002){
  printf("Senha Invalida\n");
  scanf("%d", &senha);
}
printf("Acesso Permitido\n");

return 0;
}