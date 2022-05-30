/*
  autor: Elivelton Bouteille;
  nome: 1157 - Divisores I;
*/

#include <stdio.h>

int main(void){
    int num, i;
    scanf("%d", &num);
    
    for(i=1; i<=num; i++){
        if(num%i==0)
            printf("%d\n", i);
    }

    return 0;
}
