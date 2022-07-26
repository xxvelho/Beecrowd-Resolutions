 //1589 - Bob Conduite
 
 #include <stdio.h>
 
int main(){
  int casos;
  scanf("%d", &casos);
    
  int a, b;
  for(int i=0; i<casos; i++){
    scanf("%d %d", &a, &b);
    printf("%d\n", a+b);
  }
    
  return 0;
}
