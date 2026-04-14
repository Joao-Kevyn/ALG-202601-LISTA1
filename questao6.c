#include <stdio.h>

int main (){
    
    int soma, divisao;
    int i;
    printf("Numeros perfeitos entre 1 e 100\n");   
    
    for (i=1; i<100; i++){
        soma = 0;
        
        for (divisao = 1; divisao < i; divisao++){
            
            if(i % divisao == 0){
                 soma += divisao;
            }
            
        }
        
        if(soma == i){
             printf("%d\n",i);
        }
        
    }

    system("pause"); 
    
    return 0;
    
}
