//lista03ex06

/*Fa�a um programa que leia o arquivo criado pelo programa anterior, mostrando todos
os dados dos funcion�rios na tela e informando ao final o n�mero total de empregados
da empresa. Observa��o: imprima um registro em cada linha, para tornar a sa�da mais
f�cil de ser visualizada*/

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
