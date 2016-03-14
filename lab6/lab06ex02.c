//ex2
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#define MAX 3
#define MAX1 10
#define MAX2 5

struct taluno {
    int nr;
    char nome[MAX1];
    char departamento[MAX2];
    float nota[3];
    float media;
};

int main(){
    
    int i, j, k, nmediabaixa=0, nrep=0;
    float mediat, menorn0=10, maiormedia=0;
    struct taluno aluno[MAX];
        
    for(i=0;i<MAX;i++){                
        
        printf("Digite nr do aluno %d:", i);
        scanf("%d", &aluno[i].nr);
        
        printf("Digite nome do aluno:");
        scanf("%s", &aluno[i].nome);
        for(j=0;j<strlen(aluno[i].nome);j++){
            aluno[i].nome[j]=tolower(aluno[i].nome[j]);
            aluno[i].nome[0]=toupper(aluno[i].nome[0]);
        }
        
        printf("Digite o departamento:");
        scanf("%s", &aluno[i].departamento);
        getchar();
        
        for(j=0;j<strlen(aluno[i].departamento); j++){
            aluno[i].departamento[j] = toupper(aluno[i].departamento[j]);
        }
        
        for(j=0;j<MAX;j++){
            printf("Insira a nota %d:", j);
            scanf("%f", &aluno[i].nota[j]);
            if(aluno[i].nota[0]<menorn0) menorn0=aluno[i].nota[j];
        }    
        
        //calculos envolvendo a media
        aluno[i].media=0;
        for(j=0;j<MAX;j++){
            aluno[i].media+=aluno[i].nota[j];
        }
        aluno[i].media=aluno[i].media/3;
        if(aluno[i].media<5) nmediabaixa++; 
        if(aluno[i].media>maiormedia) {
            maiormedia=aluno[i].media;
            k=i;
        }
               
    }
    
    for(i=0;i<MAX;i++){
        printf("nr: %d\n",aluno[i].nr );
        printf("nome:");
        puts(aluno[i].nome);
        printf("dep:", aluno[i].departamento);
        puts(aluno[i].departamento);
        for(j=0;j<MAX;j++){
            printf("nota %d: %.2f\n",j, aluno[i].nota[j]);
        }
        mediat+=aluno[i].media/3;
    printf("media: %.2f\n", aluno[i].media);
    }
    
    printf("===================================\n");
    printf("Resumo Geral do Desempenho da turma\n");
    printf("===================================\n\n");
    printf("Media da turma: %.2f\n", mediat);
    printf("Menor nota da turma: %.2f\n", menorn0);
    printf("Nome do aluno com a maior media :");
    puts(aluno[k].nome);
    printf("Numero de alunos abaixo da media: %d\n", nmediabaixa);
    printf("Nome do(s) aluno(s) reprovado(s):\n");
    for(i=0;i<MAX;i++){
        if(aluno[i].media<5){
            puts(aluno[i].nome);
            nrep++;
        }        
    }
    if(nrep==0)printf("Nao ha.\n");
    
    system("PAUSE");
    return 0;
}

