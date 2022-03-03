/*
  autor: Elivelton Bouteille;
  nome: 1020 - Idade em Dias;
*/

#include <stdio.h>

int main(void) {

int i, dia, mes=0, ano=0;

scanf("%d", &dia);

for(i=1;i<dia;i++){
  if(i%365==0){
    ano+=1;
  }
}
dia-=(365*ano);

for(i=1;i<(dia+1);i++){
  if(i%30==0 && mes<=30){
    mes+=1;
  }
}
dia-=(30*mes);

printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes,dia);

return 0;
}
