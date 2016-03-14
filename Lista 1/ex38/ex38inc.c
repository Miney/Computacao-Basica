/*38. Escreva um algoritmos que solicita um número real ao usuário e mostra:
a. a parte inteira do número;
b. a parte fracionária do número;
c. a número arredondado.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
    
    float n;
    int ni;
    
    printf("Insira um numero real: ");
    scanf("%f", &n);
    getchar();
    
    ni=n;
                
    printf("A parte inteira do numero: %d\n", ni);
    printf("A parte fracionaria do numero %f\n", n-ni);
    printf("O numero arredondado: %.0f \n", n); 
    
    system("PAUSE");
    
    return 0;
}
