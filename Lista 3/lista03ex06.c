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
