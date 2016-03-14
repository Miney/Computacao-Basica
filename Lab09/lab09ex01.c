//lab09ex01

#include <stdio.h>
#include <stdlib.h>

struct dados{
    int matricula;
    float notasp[3];
    float notast[5];
};

int main(int argc, char *argv[]){
    
    FILE *file;
    int i, j;
    int N;
    char nome;
    
    struct dados *alunos;
    
    printf("Insira o numero de alunos:");
    scanf("%d", &N);
    
    alunos = (struct dados *)calloc(N,sizeof(struct dados));
    
    for(i=0; i<N; i++){
        printf("Insira a matricula do aluno %d:",i+1);
        scanf("%d", &(*(alunos+i)).matricula);
        for(j=0; j<3; j++){
            printf("Insira a nota da prova %d:", j+1);
            scanf("%f", &(*(alunos+i)).notasp[j]);
        }
        for(j=0; j<5; j++){
            printf("Insira a nota do trabalho %d: ", j+1);
            scanf("%f", &(*(alunos+i)).notast[j]);
        }        
            
    }
    
    for(i=0; i<N; i++){
        printf("Matricula do aluno %d: %d\n", i+1, &((*(alunos+i)).matricula));
        for(j=0; j<3; j++){
            printf("Nota da prova %d: %.2f\n", j+1, &((*(alunos+i)).notasp[j]));
        }
        for(j=0; j<5; j++){
            printf("Nota do trabalho %d: %.2f\n", j+1, &((*(alunos+i)).notast[j]));
        }
    }
        
    printf("Insira o nome do arquivo de texto:");
    gets(nome);
    
    file=fopen(nome, "a+");
    
    for(i=0; i<N; i++){
        fprintf("Matricula do aluno %d: %d\n", i+1, &((*(alunos+i)).matricula));
        for(j=0; j<3; j++){
            fprintf("Nota da prova %d: %.2f\n", j+1, &((*(alunos+i)).notasp[j]));
        }
        for(j=0; j<5; j++){
            fprintf("Nota do trabalho %d: %.2f\n", j+1, &((*(alunos+i)).notast[j]));
        }
    }
    
    system("PAUSE");
    return 0;
}
