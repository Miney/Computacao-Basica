/*33. Escreva um programa que calcule a �rea de um circulo a partir do valor do per�metro, fornecido pelo
usu�rio.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    
    float p, r;
    
    printf("Insira o perimetro do circulo:");
    scanf("%f", &p);
    getchar();
    
    r=p/(2*M_PI);
         
    
    printf("A Area do circulo: %.2f\n", pow(r,2)*M_PI);
    
    system ("PAUSE");
    
    return 0;
           }
