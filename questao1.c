#include <stdio.h>

int main (){

    int seg, minutos, horas, sobraSegundo;
    
    printf("Digite aqui a quantidade de segundos:");
    scanf("%d", &seg);
    
    horas = seg / 3600;
    minutos = (seg % 3600) / 60; 
    sobraSegundo = seg % 60;
    
    printf("Horas: %d.\n Minutos: %d.\n Segundos: %d\n", horas, minutos, sobraSegundo);
    
    
    system("pause");
    
    return 0;

}
