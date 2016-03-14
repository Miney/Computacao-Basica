/*30. Em um rally foram percorridos dois trechos. Escreva um programa que leia a quilometragem de
cada um dos trechos em km, e o tempo total para percorrê-los, em horas. Calcule e imprima a
velocidade média geral do piloto.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    float s1, s2, t;
    
    printf("Insira a quilometragem do primeiro trecho: ");
    scanf("%f", &s1);
    getchar();
    
    printf("Insira a quilometragem do segundo trecho: ");
    scanf("%f", &s2);
    getchar();
    
    printf("Insira o tempo gasto para percorrer os trechos: ");
    scanf("%f", &t);
    getchar();
    
    printf("Sua velocidade media geral foi: %.2f km/h\n", (s1+s2)/t);
    
    system("PAUSE");
    
    return 0;
}
