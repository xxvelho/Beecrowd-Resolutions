
/*
  autor: Elivelton Bouteille;
  nome: 1116 - Dividindo X por Y;
*/

#include <stdio.h>

int main () {

  int i, n, x, y;
  float resultado;
  
  scanf("%d", &n);

  for(i=0; i<n;i++){
    scanf("%d %d", &x, &y);
  
    if(x==0){
    printf("0.0\n");
    }
    else if (y==0){
      printf("divisao impossivel\n");
      
    }
    else{
      resultado = (float) x/y;
      printf("%.1f\n", resultado);
    }
  }
  
return 0;
}
