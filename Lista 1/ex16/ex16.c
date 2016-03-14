/*16. Escreva um programa que solicita ao usuário a valor de 
sua altura e de sua massa, e calcula seu
índice de massa corporal IMC [Dica: IMC = peso / (altura)2 ].*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    
    float h;
    float m;
    
    printf ("Insira sua altura: ");
    scanf ("%f", &h);
    getchar();
    
    if(h<=0) {
             printf ("A altura nao pode ser negativa ou nula \n");
             system ("PAUSE");
             return 0;
             }
    
    printf ("Insira sua massa: ");
    scanf ("%f", &m);
    getchar();
    
    if(m<=0) {
             printf ("A massa nao pode ser negativa ou nula \n");
             system ("PAUSE");
             return 0;
             }  
             
    printf ("Seu IMC: %.2f  \n", m/pow(h,2));
    system ("PAUSE");
    
    return 13;
} 
