/*
  autor: Elivelton Bouteille;
  nome: 2388 - Tacógrafo;
*/

#include <stdio.h>

int main(void){
    int n, i, distancia = 0, t, v;
    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%d %d", &t, &v);
        distancia+=(t*v);
    }
    printf("%d\n", distancia);

    return 0;
}
