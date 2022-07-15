//2339 - Aviões de Papel

#include <stdio.h>

int main(){
   int competidores, max_papel, folhas_alunos;
   scanf("%d %d %d", &competidores, &max_papel, &folhas_alunos);
   
   if((max_papel/competidores)>=folhas_alunos)
      printf("S\n");
   else
      printf("N\n");

   return 0;
}
