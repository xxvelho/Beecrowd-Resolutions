/*
  autor: Elivelton Bouteille;
  nome: 1072 - Intervalo 2;
*/

#include <stdio.h>

int main() {
  int n, i, in = 0, out = 0;

  scanf("%d", &n);
  for(i = 0; i<n;i++){
    int num;
    scanf("%d", &num);
    
    if(num >= 10 && num <=20){
      in += 1;
    }
    else{
      out += 1;
    }
  }
  
  printf("%d in\n%d out\n", in, out);
  
  return 0;
}
