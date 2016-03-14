/*21. Em uma pizzaria cada suco custa R$ 2,50 e uma pizza mista 
grande custa R$ 20,00, mais R$1,50
por tipo de cobertura pedida (queijo, presunto, banana, etc.). 
Uma turma vai à pizzaria e pede uma
determinada quantidade de sucos e algumas pizzas grandes com uma determinada quantidade de
coberturas. Faca um programa que calcula e conta e, sabendo quantas pessoas estão à mesa,
quanto que cada um deve pagar (não esqueça os 10% do garçom).*/

#include<stdio.h>
#include<stdlib.h>

int main() {
    
    float suco;
    float pizza;
    float cobertura;
    int   pessoas;
    
    printf ("Insira a quantidade de sucos pedidos:");
    scanf ("%f", &suco);
    getchar();
    
    printf("Insira a quantidade de pizzas pedidas: ");
    scanf("%f", &pizza);
    getchar();
    
    printf("Insira a quantidade de cobeturas :");
    scanf("%f", &cobertura);
    getchar();
    
    printf("Quantas pessoas estavam a mesa?");
    scanf("%d", &pessoas);
    getchar();
    
    printf("O valor total da conta sem 10 porcento: %.2f \n",((2.5*suco)+(20.0*pizza)+(1.5*cobertura)));
    printf("O valor por pessoa sem 10 porcento : %.2f \n" , ((2.5*suco)+(20.0*pizza)+(1.5*cobertura))/pessoas);
    printf("O valor total da conta com 10 porcento: %.2f \n",1.1*((2.5*suco)+(20.0*pizza)+(1.5*cobertura)));
    printf("O valor por pessoa com 10 porcento: %.2f \n", 1.1*((2.5*suco)+(20.0*pizza)+(1.5*cobertura))/pessoas);
    
    system ("PAUSE");
 
    return 0;
}
