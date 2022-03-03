/*
  autor: Elivelton Bouteille;
  nome: 1387 - Og;
*/

#include <stdio.h>

int main () {
  int l,r, soma;
  scanf("%d %d", &l, &r);
  
  while((l>0 &&l<6) && ( r>0 && r<6)){
    soma=l+r;
    printf("%d\n",soma);
    soma=0;
    scanf("%d %d", &l, &r);
    if(l==0 || r==0){
      break;
    }
  }

return 0;
}
