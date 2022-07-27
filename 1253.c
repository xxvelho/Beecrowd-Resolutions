//1253 - Cifra de César

#include <stdio.h>
#include <string.h>

//chave da funcao
char decoderCesar(char *s, int k);

int main(){
  int qtd_casos;
  scanf("%d", &qtd_casos);

  char str[50];
  int deslocamento;
  for(int i=0; i<qtd_casos; i++){
    scanf("%s %d", str, &deslocamento);
    
    decoderCesar(str, deslocamento);
    printf("%s\n", str);  
  }
  
  return 0;
}

//funcao
char decoderCesar(char *s, int k){
  int contador = 0;
  while(s[contador] != '\0'){
    if(s[contador] >= 'A' && s[contador] <= 'Z'){
      if(s[contador] - k < 'A') {
        s[contador] = s[contador] + 26;
      }
      s[contador] -= k;
    }
    contador++;
  }
}
