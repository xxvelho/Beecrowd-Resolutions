// 2061 - As Abas de Péricles;

#include <stdio.h>

int main(void){
    int abas, cliques, i;
    char acao[7];
    scanf("%d %d", &abas, &cliques);

    for(i=0; i<cliques; i++){
        scanf("%s", &acao);
        if(acao[0] == 'f')
            abas++;
        else
            abas--;
    }

    printf("%d\n", abas);

    return 0;
}
