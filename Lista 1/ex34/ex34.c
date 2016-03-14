/*34. Sabe-se que a área de um trapézio é calculada pela equação abaixo:
onde S é a área, B é a base maior, b é a base menor e h é a altura.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    float b, B, h;
    
    printf("Insira a base menor do trapezio:");
    scanf("%f", &b);
    getchar();
    
    printf("Insira a base maior do trapezio:");
    scanf("%f", &B);
    getchar();
    
    printf("Insira a altura do trapezio:");
    scanf("%f", &h);
    getchar();
    
    printf("A area do trapezio: %.2f\n", ((B+b)*h)/2);
    
    system ("PAUSE");
    
    return 0;
           
           }
