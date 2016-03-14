#include <stdio.h>
#include <stdlib.h>

int main(){
    
    char nome[100];
    float d, t;
    
    printf("Insira o nome do piloto:");
    scanf("%[^\n]", &nome);
    getchar();
    
    printf("Insira a distancia percorrida, em kilometros: ");
    scanf("%f", &d);
    getchar();
    
    printf("Insira o tempo gasto, em horas: ");
    scanf("%f", &t);
    getchar();
    
    printf("A velocidade media de %s foi de %.2f km/h \n\n", nome, d/t);
    
    system("PAUSE");
    
    return 0;
}
