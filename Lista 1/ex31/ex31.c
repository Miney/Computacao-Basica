/*31. Escreva um programa que solicita ao usu�rio o pre�o da passagem de �nibus e a quantidade de
vezes que ele pega a condu��o no m�s para ir ao trabalho, retornando o gasto mensal do usu�rio
com transporte*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    float preco;
    int vezes;
    
    printf("Insira o custo da passagem de onibus:");
    scanf("%f", &preco);
    getchar();
    
    printf("Insira a quantidade de vezes que voce pega a conducao por mes:");
    scanf("%d", &vezes);
    getchar();
    
    printf("Seu gasto mensal com transporte : %.2f\n", preco*vezes);
    
    system("PAUSE");
    return 0;
    
           }
