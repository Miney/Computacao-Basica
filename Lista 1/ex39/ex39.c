/*39. Escreva um programa que l� o valor do sal�rio m�nimo e o valor de um outro sal�rio qualquer,
fornecidos pelo usu�rio. O programa deve calcular e mostrar na tela do computador a quantos
sal�rios m�nimos equivale o sal�rio informado pelo usu�rio.*/

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
