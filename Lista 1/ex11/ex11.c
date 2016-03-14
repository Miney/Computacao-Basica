/*11. Escreva um programa que solicita ao usuário um valor 
e imprime na tela do computador o log10
desse valor.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float num;
    
    printf ("Insira um numero:");
    scanf ("%f" , &num);
     
    printf ("O logaritmo na base 10 do numero inserido: %.2f \n ", log10(num));
    
    system ("PAUSE");
    
    return 0;
} 
