#include <stdio.h>


int main(){
  
  int num, somaNum, contador =0;
  float media;
  
  printf("Digite um numero aqui: ");
  scanf("%d", &num);
  
  while (num > 0){
        somaNum = somaNum + num;
        contador++;
        
        printf("Continue digitando numeros: ");
        scanf("%d", &num);
  }
  
  media = somaNum / contador;
  
  printf("A media e: %.2f\n", media);
  
  system("PAUSE");	
  return 0;
}
