/*5. Escreva um programa que leia um ângulo entre 0 e 360 graus e imprima na tela do
computador em que quadrante esse ângulo se encontra.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

float angulo;

printf("Insira um angulo entre 0 e 360 graus:");
scanf("%f", &angulo);

if(angulo<0) printf("Angulo invalido!\n");

else if(angulo<=90)printf("O angulo se encontra no primeiro quadrante.\n");    

else if(angulo<=180)printf("O angulo se encontra no segundo quadrante.\n");

else if(angulo<=270)printf("O angulo se encontra no terceiro quadrante.\n");

else if(angulo<=360)printf("O angulo se encontra no quarto quadrante.\n");

system("PAUSE");

return 123;

}
