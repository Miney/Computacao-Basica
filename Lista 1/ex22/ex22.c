/*Dados os valores de a e b 
de uma equação do tipo ax+b = 0, escreva um programa que determina a
raiz da equação.*/

#include <stdio.h>
#include <stdlib.h>


int main(){
    
    float a;
    float b;
    
    printf("Insira o valor de a:");
    scanf("%f", &a);
    getchar();
    
    printf("Insira o valor de b:");
    scanf("%f", &b);
    getchar();
    
    printf("O valor de x: %.2f\n ", (-b)/a);
    
    system ("PAUSE");
    
    return 0;
}
