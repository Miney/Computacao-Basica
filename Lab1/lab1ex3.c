/*Problema 3: Um hotel com N apartamentos resolveu fazer
promo��es para os fins de semana fora da alta temporada. A taxa
de promo��o � de X % de desconto na di�ria normal D. A
ocupa��o m�dia do hotel sem a promo��o � de 40% dos quartos.
A expectativa � de, com a promo��o, aumentar a taxa de
ocupa��o de 40 para 70%. Supondo que as expectativas se
confirmem, escreva um programa em C que l� os valores de N, X
02/06/2010 5
e D, e calcula as seguintes informa��es:
a. O valor da di�ria no per�odo de promo��o;
b. O valor arrecadado sem a promo��o, durante um m�s;
c. O valor arrecadado com a promo��o, durante um m�s; e
d. O lucro ou o prejuizo mensal com a promo��o.
e. Sugest�o do valor m�ximo do desconto X a partir do qual
ocorre prejuizo.*/


#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int N;
    float D;
    float X;
    
    
printf("Insira a quantidade de apartamentos disponivel:");
scanf("%int", &N);
getchar();

printf("Insira o valor da diaria: ");
scanf("%f", &D);
getchar();

printf("Insira o valor do desconto promocional sem o simbolo porcento: ");
scanf("%f", &X);
getchar();

if(X>(300/7)) {
    printf("E possivel que esse desconto acarrete prejuizo\n");
    printf("Insira um valor de desconto preferencialmente menor que 42,85:");
    scanf("%f", &X);
    getchar();
}

printf("O valor da diaria no periodo promocional: %.2f \n", D-(D*(X/100)));
printf("O valor arrecadado durante um mes, sem a promocao: %.2f\n", 0.4*N*D*31);
printf("O valor arrecadado durante um mes, com a promocao: %.2f\n", 0.7*N*31*(D-(D*(X/100))));
printf("A diferenca de arrecadacao com a promocao e sem a promocao: %.2f\n", (0.7*N*31*(D-(D*(X/100)))-(0.4*N*D*31)) );

system("PAUSE");

return 0;

}
