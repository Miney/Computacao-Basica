//ex34
#include <stdlib.h>
#include <stdio.h>

int main(){
    
    int M, N, i=0, j=0;
    float matriz[M][N], mlinha[M], mcoluna[N], maior, menor, soma;
    
    
    printf("Insira o numero de linhas da matriz:");
    scanf("%d", &M);
    printf("Insira o numero de colunas da matriz:");
    scanf("%d", &N);
    
    for(i=0;i<M;i++){
        for(j=0;j<N;j++){
            printf("Insira o valor %d %d:", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }
    
    for(i=0;i<M;i++){
        for(j=0;j<N;j++){
            soma+=matriz[i][j];
        }
        mlinha[i]=soma/N;
        if(i==0&&j==0){
            maior=mlinha[0];
            menor=mlinha[0];
            if(mlinha[i]>maior) maior=mlinha[i];
            if(mlinha[i]<menor) menor=mlinha[i];
        }
    }
    
    for(j=0;j<N;j++){
        for(i=0;i<M;i++){
            soma+=matriz[i][j];
        }
        mcoluna[j]=soma/N;
        if(mcoluna[j]>maior) maior=mcoluna[j];
        if(mcoluna[j]<menor) menor=mcoluna[j];
    }
    
    
    system ("PAUSE");
    return 0;
}

