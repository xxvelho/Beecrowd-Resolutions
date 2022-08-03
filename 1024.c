//1024 - Criptografia

#include <stdio.h>
#include <string.h>

int main (){
  char palavra[1000], aux;
  int casos, i, j, tam, tamMetade;

  scanf("%d", &casos);

  while (casos){
    scanf(" %[^\n]", palavra);

    tam = strlen(palavra);
    tamMetade = tam/2;

    //Primeira passada
    for (i = 0; i < tam; i++ ){
      if ((palavra[i] >= 'A' && palavra[i] <= 'Z') || (palavra[i] >= 'a' && palavra[i] <= 'z')){
        palavra[i] = palavra[i] + 3;
      }
    }
    //Segunda passada
    for (i = 0, j = tam-1; i < tamMetade; i++, j--){
      
      aux = palavra[j];
      palavra[j] = palavra[i];
      palavra[i] = aux;
      
    }
    
    //Terceira passada
    for (i = tamMetade; i < tam; i++ ){
      if ((palavra[i] >= 32 && palavra[i] <= 176 )){
        palavra[i] = palavra[i] - 1;
      }
    }
    
    //Mostra string criptografada
    printf("%s\n", palavra);

    casos--;
  }
  
  return 0;
}
