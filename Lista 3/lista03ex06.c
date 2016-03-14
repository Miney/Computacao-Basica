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
    
    f=fopen("dados_funcionarios.txt", "r");
    
    while (!feof(f)){
        fscanf(f,"%d", &matric);
        printf("%d   ", matric);
        
        fscanf(f, "%s", &depto);
        printf("%s   ", depto);
        
        fscanf(f, "%s" , &nome);
        printf("%s   ", nome);
        
        fscanf(f, "%f" , &sal);
        printf("%f\n\n", sal);
    }
    
    system("PAUSE");
    return 0;
}
