#include <stdio.h>

int main (){
    
    float num1, num2, num3, media;
    
    printf("Digite aqui um primeiro numero nao inteiro:\n ");  
    scanf("%f", &num1);
    printf("Digite aqui um segudno numero nao inteiro: \n");
    scanf("%f", &num2);
    printf("Digite aqui um terceiro numero nao inteiro: \n");
    scanf("%f", &num3);
    
    media = (num1 + num2 + num3) / 3;
    
    if (num1 > num2 && num1 > num3){
       printf("Maior numero e: %.2f\n", num1);
    }
    else if (num2 > num1 && num2 > num3){
       printf("Maior numero e: %.2f\n", num2);
    }
    else {
       printf("Maior numero e: %.2f\n", num3);
    }
    
    printf("A media e: %.2f \n", media);
    
    
    system("pause");
    
    return 0;
}
