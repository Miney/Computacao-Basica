/*29. Escreva um programa que solicita ao usuário uma distância percorrida em km e o tempo gasto para
percorrê-la (em horas). O programa deve calcular a velocidade média em km/h, e exibir a seguinte
frase:
“A velocidade média foi YY km/h. Onde YY é sua velocidade média.”*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    float s, t;
    
    printf("Insira a distancia percorrida em kilometros:");
    scanf("%f", &s);
    getchar();
    
    printf("Insira o tempo gasto em horas:: ");
    scanf("%f", &t);
    getchar();
    
    printf("A velocidade media foi %.2f km/h\n", s/t);
    
    system("PAUSE");
    
    return 0;
    
}
