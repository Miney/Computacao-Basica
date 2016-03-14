/*14. Escreva um programa que calcule a área de um triângulo, 
dadas a base e a altura fornecidas pelo
usuário.*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float b;
    float h;
    
    printf ("Insira o valor da base do triangulo: ");
    scanf ("%f", &b);
    getchar();
    
    if(b<=0) { 
    printf ("A base nao pode ser negativa ou nula \n");
    system ("PAUSE");
    return 0;
}
    else printf("Insira a altura do triangulo: ");
    scanf ("%f", &h);
    getchar();
    
    if(h<=0) {
    printf ("Altura nao pode ser negativa ou nula \n");
    system ("PAUSE");
    return 0;
} 
    else printf ("A area do triangulo: %.2f \n", (b*h)/2);
    
    system ("PAUSE");
    
    return 0;
}
