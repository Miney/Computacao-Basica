/*19. Dados uma distância e o total de litros de combustível gasto por 
um automóvel para percorrê-la,
fornecidos pelo usuário, escreva um programa que calcula o consumo médio.*/

#include<stdio.h>
#include<stdlib.h>


int main() {
    
    float s;
    float g;
    
    
    
    printf ("Insira a distancia em kilometros: ");
    scanf("%f", &s);
    getchar();
    
    if(s<0){ 
             printf ("Distancia nao pode ser negativa \n");
             system ("PAUSE");
             return 0;
             }    
    printf("Insira o gasto em litros de combustivel: ");
    scanf("%f", &g);
    getchar();
    
    if (g<0) {
             printf("Consumo nao pode ser negativo \n");
             system ("PAUSE");
             return 0;
             }
       
    printf ("O consumo medio foi de %.2f l/km \n", g/s);
    
    system("PAUSE");
    return 0;
}
