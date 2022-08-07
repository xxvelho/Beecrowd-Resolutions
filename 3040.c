//3040 - A Árvore de Natal 

#include <stdio.h>

int main (){
  int n;
  scanf("%d", &n);

  int altura, diametro, galhos;
  for(int i=0; i<n; i++){
    
    scanf("%d %d %d", &altura, &diametro, &galhos);
    if((altura>=200 && altura<=300) && diametro>= 50 && galhos>=150){
      printf("Sim\n");
    }
    else{
      printf("Nao\n");
    }
  }

  return 0;
}
