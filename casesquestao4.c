#include <stdio.h>

int main (){
    
    float num1, num2, result; 
    char oper; 
    
    printf("Digite aqui qual operação vai querer realizar: '+', '-', '*', '%'. ");   
    scanf("%c", &oper);
    
    printf("Digite aqui o primeiro numero: ");
    scanf("%f", &num1);
    
    printf("Digite aqui o segundo numero: ");
    scanf("%f", &num2);
    
    switch(oper){
          case '+':
          result = num1 + num2;
          break;
          
          case '-':
          result = num1 - num2;
          break;
          
          case '*':
          result = num1 * num2; 
          break;
          
          case '/':
          result = num1 / num2;
          break;
    }            
    
    printf("O resultado e: %.2f \n", result);
    
    system("pause");
    
    return 0;   
    
}
