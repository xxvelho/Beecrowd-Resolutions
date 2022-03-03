/*
  autor: Elivelton Bouteille;
  nome: 1019 - Conversão de Tempo;
*/

#include <stdio.h>

int main(void) {

int i, s, min=0, h=0;

scanf("%d", &s);

for(i=1;i<s;i++){
  if(i%3600==0){
    h+=1;
  }
}

s-=(3600*h);

for(i=1;i<s;i++){
  if(i%60==0 && min<60){
    min+=1;
  }
}
s-=(60*min);

printf("%d:%d:%d\n", h,min,s);

return 0;
}
