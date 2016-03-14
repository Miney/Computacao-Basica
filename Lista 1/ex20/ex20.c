/*20. Dada uma temperatura em graus Fahrenheit, fornecida pelo usuário, informe o valor
correspondente em graus Celsius. [Dica: C = (F-32)*(5/9)].*/

#include<stdio.h>
#include<stdlib.h>


int main() {
    
    float g;
    
    
       
    do {
        printf ("Insira a temperatura em graus Fahrenheit: ");
        scanf("%f", &g);
        getchar();
        } while (3*g<(-359));
        
    printf (" A temperatura em celcius: %.2f  \n", ((g-32)*5/9));
    
    system("PAUSE");
    
    return 0;
}
