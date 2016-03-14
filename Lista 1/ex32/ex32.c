/*32. Escreva um programa que leia um valor em polegadas e apresente a mesagem:
“xx polegadas correspondem a yy centímetros”.
Os valores devem ser apresentados com 4 casa decimais [Dica: 1 polegada = 2,54 centímetros].*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    float p;
    
    printf("Insira um valor em polegadas:");
    scanf("%f", &p);
    getchar();
    
    printf("%.4f polegadas correspondem a %.4f centimetros\n", p, p*2.54);
    
    system("PAUSE");       
    return 0;
           }
