/*43. Escreva um programa que solicita um ano ao usuário, e informa se ele é ou não
bissexto. [Dica: Todos os anos que sejam múltiplos de 4 mas que não sejam múltiplos
de 100, com exceção daqueles que são múltiplos de 400, são bissextos.]*/

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
     
