/*28. Dadas as medidas dos catetos de um triângulo retângulo, 
fornecidas pelo usuário, escreva um
programa que calcula a medida da hipotenusa.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()

{
    
    float c1, c2;
    
    printf("Insira o primeiro cateto: ");
    scanf("%f", &c1);
    getchar();
    
    printf("Insira o segundo cateto: ");
    scanf("%f", &c2);
    getchar();
    
    printf("A hipotenusa do triangulo: %.2f \n", sqrt((pow(c1,2)+pow(c2,2))));
    
    system("PAUSE");
    
    return 0;
}




