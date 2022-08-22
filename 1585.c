//1585 - Fazendo Pandorgas

#include <stdio.h>

int main(){

  int casos, a, b, area;
  scanf("%d", &casos);
  
  for(int i=0; i<casos; i++){
    scanf("%d %d", &a, &b);
    //area do losango
    area = (a*b)/2;
    
    printf("%d cm2\n", area);
    
  }

  return 0;

}
