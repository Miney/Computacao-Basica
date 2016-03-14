/*15. Escreva um programa que calcule a 
diagonal de um paralelepípedo retângulo, dados os valores das
arestas a, b e c, fornecidos pelo usuário.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
    float a;
    float b;
    float c;
    float d;
    
    printf ("Insira a base: ");
    scanf("%f", &a);
    getchar();
    
    if(a<=0) {
            printf ("A base nao pode ser negativa ou nula \n");
            system ("PAUSE");
            return 0;
            }
            
    printf ("Insira a altura: ");
    scanf("%f", &b);
    getchar();
    
    if(b<=0) {
            printf ("A altura nao pode ser negativa ou nula \n");
            system ("PAUSE");
            return 0;
            }
            
    printf ("Insira a profundidade: ");
    scanf("%f", &c);
    getchar();
    
    if(c<=0) {
            printf ("A profundidade nao pode ser negativa ou nula \n");
            system ("PAUSE");
            return 0;
            }
          
    d= sqrt(pow(a,2)+pow(b,2)+pow(c,2));
    
    printf ("A diagonal do paralelepipedo: %.2f \n", d);
    
    system ("PAUSE");
    
    return 0;
    
}  
