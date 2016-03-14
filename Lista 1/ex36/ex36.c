/*36. Escreva um programa que solicita ao usuário o valor de a e calcula a área sombreada da figura
abaixo.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    
    float a;
    
    printf("Insira o lado a do quadrado: ");
    scanf("%f", &a);
    getchar();
    
    printf("A area sombreada e:%.2f\n ", (pow(a,2))-(M_PI*(pow((a/2),2))));
    
    system("PAUSE");
    return 0;
           }
