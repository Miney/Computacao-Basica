/*37. Escreva um programa que lê duas variáveis A e B, e troque os valores entre elas. Imprimir na tela
do computador os valores originais e trocados.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    float A;
    float B;
    
    printf ("Insira a variavel A: ");
    scanf("%f", &A);
    getchar();
    
    printf("Insira a variavel B: ");
    scanf("%f", &B);
    getchar();
    
    printf ("Valor original de A: %.2f e de B: %.2f \n\n", A, B);
    printf ("Valores trocados A: %.2f e B: %.2f\n\n", B, A);
    
    system("PAUSE");
    
    return 0;
}
