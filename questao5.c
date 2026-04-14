#include <stdio.h>

int main (){
    
    int num1 = 0, num2 = 1, soma;
    int i;
    printf("A sequencia de Fibonacci e:\n ");
    
    for (i=0; i<100; i++){
        printf("%d\n", num1);
        
        soma = num1 + num2;
        num1 = num2;
        num2 = soma;
                
    }   
    
    system("pause");
    
    return 0;

}
