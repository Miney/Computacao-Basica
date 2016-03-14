//lista03ex06

/*Faça um programa que leia o arquivo criado pelo programa anterior, mostrando todos
os dados dos funcionários na tela e informando ao final o número total de empregados
da empresa. Observação: imprima um registro em cada linha, para tornar a saída mais
fácil de ser visualizada*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *f;
    
    int n=0, matric;
    char  depto[30], nome[40];
    float sal;
    
    f=fopen("dados_funcionario", "r");
    
    fscanf("%d", &matric);
    printf("%d   ", matricula);
    
    fscanf("%s", &depto);
    printf("%s   ", depto);
    
    fscanf("%s", &nome);
    printf("%s   ", nome);
    
    fscanf("%f", &sal);
    fprintf("%f\n\n", sal);
    
}
