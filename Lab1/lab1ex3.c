/*Problema 3: Um hotel com N apartamentos resolveu fazer
promoções para os fins de semana fora da alta temporada. A taxa
de promoção é de X % de desconto na diária normal D. A
ocupação média do hotel sem a promoção é de 40% dos quartos.
A expectativa é de, com a promoção, aumentar a taxa de
ocupação de 40 para 70%. Supondo que as expectativas se
confirmem, escreva um programa em C que lê os valores de N, X
02/06/2010 5
e D, e calcula as seguintes informações:
a. O valor da diária no período de promoção;
b. O valor arrecadado sem a promoção, durante um mês;
c. O valor arrecadado com a promoção, durante um mês; e
d. O lucro ou o prejuizo mensal com a promoção.
e. Sugestão do valor máximo do desconto X a partir do qual
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
