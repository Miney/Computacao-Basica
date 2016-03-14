/*Crie um programa em C que leia os três coeficientes
de uma equação de segundo grau y = ax2 + bx + c = 0 e imprima o
valor das raízes. Assumir que o valor de delta é sempre maior ou
igual a zero.
Teste o programa com os seguintes conjuntos de valores:
02/06/2010 3
•a = 1, b = -8, c = 15  resposta correta: x1 = 5 x2 = 3
•a = 1, b = -8, c = 0  resposta correta: x1 = 8 x2 = 0
•a = 2, b = -6, c = 4  resposta correta: x1 = 2 x2 = 1
•a = 4, b = 8, c = 3  resposta correta: x1 = -0.5 x2 = -1.5*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
    
    float a;
    float b;
    float c;
    float x1;
    float x2;
    float d;
    
    
    printf ("Insira o coeficiente a: ");
    scanf("%f", &a);
    getchar();
    
    printf ("Insira o coeficiente b: ");
    scanf("%f", &b);
    getchar();
    
    printf ("Insira o coeficiente c: ");
    scanf("%f", &c);
    getchar();
    
    d=pow(b,2)-(4*a*c);
    x1=(-(b)+sqrt(d))/(2*a);
    x2=(-(b)-sqrt(d))/(2*a);
    
    printf(" x1= %.2f  e x2= %.2f \n", x1, x2);
    
    system("PAUSE");
    
    return 0;
    
}
