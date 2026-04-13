#include <stdio.h>

int main (){
 
    int num;
    
    printf("Digite aqui um numero:");   
    scanf("%d", &num);
    
    if (num % 2 == 0){
       printf("Numero Par\n");
    }
    else{
       printf("Numero impar\n");     
    }
    
    system ("pause");
    return 0;
}
