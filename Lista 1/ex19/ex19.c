/*19. Dados uma dist�ncia e o total de litros de combust�vel gasto por 
um autom�vel para percorr�-la,
fornecidos pelo usu�rio, escreva um programa que calcula o consumo m�dio.*/

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
