//1002 - Área do Círculo

#include <stdio.h>

int main(){
  double raio, area;
  scanf("%lf", &raio);
  
  area = (raio*raio)*3.14159;
  
  printf("A=%.4lf\n", area);

  return 0;
}
