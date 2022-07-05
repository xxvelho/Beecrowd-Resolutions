// 2006 - Identificando o Chá;

#include <stdio.h>

int main(void){
    int participantes[5];
    int cha, acertos = 0, i;
    scanf("%d", &cha);
  
    for (i = 0; i < 5; i++){
        scanf("%d", &participantes[i]);
        if(participantes[i]==cha)
            acertos++;
    }
    printf("%d\n", acertos);

    return 0;
}
