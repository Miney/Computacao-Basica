/*Fa�a um programa que gere um arquivo (de texto) em disco contendo os dados dos
funcion�rios de uma empresa com a estrutura especificada abaixo, a partir de
informa��es dadas pelo usu�rio atrav�s do teclado. Ap�s a leitura dos dados de cada
funcion�rio, solicitar uma mensagem se o usu�rio deseja continuar cadastrando dados.
A grava��o no arquivo deve ser feita registro a registro. Observa��o: cadastre alguns
funcion�rios com sal�rio de at� R$ 500,00, alguns com sal�rio acima de R$ 500,00 e
abaixo de R$ 1000,00 e outros com sal�rio de R$ 1000,00 ou mais.
struct tipoDadosFunc {
int matric;
char depto, nome[30];
float sal;
};*/

//lista03ex05

#include<stdlib.h>
#include<stdio.h>

struct tipoDadosFunc {
int matric;
char depto[30], nome[40];
float sal;
};


int main(){
    
    FILE *f;
    struct tipoDadosFunc data;
    int k=0;
    char count='m';
    
    f=fopen("dados_funcionarios.txt", "a");    
    do{
        k++;
        printf("Insira a matricula do funcionario %d:", k);
        scanf("%d", &data.matric);
        getchar();
        fprintf(f, "%d\n", data.matric);
        printf("Insira o departamento do funcionario %d:", k);
        gets(data.depto);
        fprintf(f, "%s\n",data.depto);
        printf("Insira o nome do funcionario %d:", k);
        gets(data.nome);
        fprintf(f, "%s\n",data.nome);
        printf("Insira o salario do funcionario %d:", k);
        scanf("%f", &data.sal);
        getchar();
        fprintf(f, "%.2f\n\n\n",data.sal);
        printf("\nPressione s para sair ou qualquer tecla para continuar preenchendo cadastros:\n");
        scanf("%c", &count);
        
    }while(count!='s');
    
    fclose(f);
    
    system("PAUSE");
    return 0;
    
}

