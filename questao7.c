#include <stdio.h>

int main (){
         
    int num, primo = 1;
    int i;
    
    printf("Digite aqui um numero inteiro: ");   
    scanf("%d", &num);
    
    if (num <=1){
       primo = 0;
    }
    else {
         
         for(i=2; i < num; i++){
         
            if(num % 1 == 0){
                primo = 0;
            }    

         }
           
    }
    
    if (primo){
       printf("Primo\n");
    }
    else{
       printf("Nao e primo\n");
    }
    
    system("pause");
    return 0;
    
}
