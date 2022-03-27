/*
  autor: Elivelton Bouteille;
  nome: 1061 - Tempo de um Evento;
*/

#include <stdio.h>

int main(){
  int day, day_f, h, h_f, min, min_f, s, s_f;
  int res_s, res_min, res_h, res_day;
  
  scanf("Dia %d", &day);
  scanf("%d : %d : %d\n", &h, &min, &s);
  scanf("Dia %d", &day_f);
  scanf("%d : %d : %d", &h_f, &min_f, &s_f);

  res_day = day_f-day;
  res_h = h_f-h;
  res_min = min_f-min;
  res_s = s_f-s;
  
  if(res_s < 0){
    res_s += 60;
    res_min-=1;
  }
  if(res_min < 0){
    res_min += 60;
    res_h-=1;
  }
  if(res_h < 0){
    res_h += 24;
    res_day-=1;
  }
  
  printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", res_day, res_h, res_min, res_s);

return 0;
  } 
