#include <stdio.h>

int main(){
    
    int num, i;

    for (num =2; num <= 10; num++){
        printf("Tabuada do numero %d\n", num);
        
        for (i = 1; i <= 10; i++){
            printf("%d X %d = %d\n", num, i, num*i);
        }
    }
    


  
  system("PAUSE");	
  return 0;
}
