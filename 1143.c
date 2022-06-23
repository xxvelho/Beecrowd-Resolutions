// 1143 - Quadrado e ao Cubo;

#include <stdio.h>

int main(void){
    int num, i;
    scanf("%d", &num);

    for(i=1; i<=num; i++){
        printf("%d %d %d\n", i, i*i, i*i*i);
    }

    return 0;
}
