#include <stdio.h>

int main (){
    
    int num, somaNum, contador = 0;
    float media; 
    
    printf("Digite aqui um numero positivo: ");
    scanf("%d", &num);
    
    while (num > 0){
        somaNum = somaNum + num;
        contador ++;
        
        printf("Continue digitando numeros: ");
        scanf("%d", &num);
    }
    
    media = somaNum / contador;
    
    printf("A media e: %.2f\n", media);
    
    return 0; 
}
