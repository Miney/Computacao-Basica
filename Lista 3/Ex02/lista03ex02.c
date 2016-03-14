//lista03ex02

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int *ordena (int *);
void *encontra (int, int *);

int main(){
    
    int vetor[10], N, centro;
    int k;
    
    //preenchimento do vetor
    for(k=0;k<10;k++){
        printf("insira o valor %d do vetor:", k);
        scanf("%d", &vetor[k]);
    }
    
    //ordenacao
    ordena(vetor);
    printf("vetor ordenado:\n");
    for(k=0;k<10;k++){
        printf("%d:%d\n", k, vetor[k]);
    }
    
    //busca
    printf("Insira o numero a ser procurado:");
    scanf("%d", &N);
    encontra(N, vetor);
    
    
    system("PAUSE");
    return 0;
}

//funcao de ordenacao
int *ordena (int *v){
    int var;
    int i,j;
    for(j=0;j<10;j++){
        for(i=0; i<9; i++){
            if(*(v+i)>*(v+(i+1))){
            var=*(v+i);
            *(v+i)=*(v+(i+1));
            *(v+(i+1))=var;
            }
        }
    }
    return v;
}

//funcao de busca
void *encontra (int n, int *v){
    int c, l=10, inicio=0, fim; // c seria o centro e l o comprimento do vetor
    fim=l-1;
    do{
        c=inicio+((fim-inicio)/2);
        printf("%d\n", c);
        if(n==v[c]){
            printf("Elemento se encontra no vetor.\n"); 
            return;
        }
        else if(n>v[c]){
            inicio=c+1;
            printf("%d\n", inicio);
        }
        else{
            fim=c-1;
            printf("%d\n", fim);
        }
    }while(inicio!=fim);
    if(inicio==fim&&n==v[inicio]){
        printf("Elemento se encontra no vetor.\n"); 
        return;
    }
    printf("Elemento nao encontrado.\n");
    return;
}

//Yasmin Pimentel 110144341
