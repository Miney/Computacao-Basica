/*34. Sabe-se que a �rea de um trap�zio � calculada pela equa��o abaixo:
onde S � a �rea, B � a base maior, b � a base menor e h � a altura.*/

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
