/*43. Escreva um programa que solicita um ano ao usu�rio, e informa se ele � ou n�o
bissexto. [Dica: Todos os anos que sejam m�ltiplos de 4 mas que n�o sejam m�ltiplos
de 100, com exce��o daqueles que s�o m�ltiplos de 400, s�o bissextos.]*/

#include <stdio.h>
#include <stdlib.h>

int main(){
     
     int ano;
     
     printf("Insira o ano:");
     scanf("%d", &ano);
     getchar();
     
     if(ano%400==0)printf("O ano e bissexto\n\n");
     
     else if(ano%4==0 && ano%100!=0) printf("O ano e bissexto\n\n");
     
     else printf("O ano nao e bissexto\n\n");
     
     system ("PAUSE");
     
     return 0;
     }
     
