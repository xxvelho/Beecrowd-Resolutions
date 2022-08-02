//1555 - Funções

#include <stdio.h>
#include <math.h>

int main(){
  int rafael, beto, carlos;
  int n;
  scanf("%d", &n);

  int x, y;
  for(int i=0; i<n; i++){
    scanf("%d %d", &x, &y);
    
    rafael = pow(3*x, 2) + pow(y, 2);
    beto = 2 * pow(x, 2) + pow(5*y, 2);
    carlos = -100*x + pow(y, 3); 

    if(rafael > beto && rafael > carlos)
      printf("Rafael ganhou\n");
    if(beto > rafael && beto > carlos)
      printf("Beto ganhou\n");
    if(carlos > beto && carlos > rafael)
      printf("Carlos ganhou\n");
  
  }

  return 0;
}
