#include <stdio.h>

int main(){
  
  int i, x,somaDosLados = 0;
  
  for(i=0; i<=6; i++){
        
        for(x=i;  x <= 6; x++){
           somaDosLados += i + x;
        }
        
  }
  
  printf("A soma dos numeoros de um domino e igual a: %d\n", somaDosLados);
  
  system("PAUSE");	
  return 0;
}
