//2060 - Desafio de Bino

#include <stdio.h>

int main(){

  int qtd, temp, dois=0, tres=0, quatro=0, cinco=0;
  scanf("%d", &qtd);
  
  for(int i=0; i<qtd; i++){
    scanf("%d", &temp);
    
    if(temp % 2 == 0){
      dois++;
    }
    if(temp % 3 == 0){
      tres++;
    }
    if(temp % 4 == 0){
      quatro++;
    }
    if(temp % 5 == 0){
      cinco++;
    }
    
  }

  printf("%d Multiplo(s) de 2\n", dois);
  printf("%d Multiplo(s) de 3\n", tres);
  printf("%d Multiplo(s) de 4\n", quatro);
  printf("%d Multiplo(s) de 5\n", cinco);
  
  return 0;

}
