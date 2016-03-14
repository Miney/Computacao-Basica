/*39. Escreva um programa que lê o valor do salário mínimo e o valor de um outro salário qualquer,
fornecidos pelo usuário. O programa deve calcular e mostrar na tela do computador a quantos
salários mínimos equivale o salário informado pelo usuário.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    float s1, s2;
    
    printf("Insira o valor do salario minimo: ");
    scanf("%f", &s1);
    getchar();
    
    printf("Insira o valor do salario a ser comparado: ");
    scanf("%f", &s2);
    getchar();
    
    printf("O salario em questao equivale a %.2f vezes o salario minimo\n\n", s2/s1);
    
   system("PAUSE");
    
    return 0;
}
