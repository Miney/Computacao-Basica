//lista3ex01 por Yasmin Pimentel

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

float *ordena (float *);

struct vetor{
float v[10];
};

int main(){
    int i, j;
    float  vo[10];
    struct vetor v[5];
    
    for(j=0;j<5;j++){
        //preenche os vetores
        for(i=0;i<10;i++){
            printf("Insira o valor %d do vetor %d:", i, j+1);
            scanf("%f", &v[i].v[j]);
        }
        //preenche o vetor ordenar
        for(i=0;i<10;i++){
            vo[i]=v[i].v[j];
        }
        //imprime o vetor desordenado
        printf("Vetor %j desordenado [", j);
        for(i=0;i<10;i++){
            printf("  %.2f,", vo[i]);
        }
        printf("]\n\n");
        //chama funcao de ordenacao
        ordena(vo);
        //imprime o vetor desordenado
        printf("Vetor %j ordenado [", j);
        for(i=0;i<10;i++){
            printf("  %.2f", vo[i]);
        }
    printf("]\n\n");
    }
    system("PAUSE");
    return 0;
}


float *ordena (float *v){
    float var;
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

