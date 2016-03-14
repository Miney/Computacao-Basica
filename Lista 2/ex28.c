//ex28
#include <stdlib.h>
#include <stdio.h>

int main(){
    int vetor[10], i, maior, M=0, menor, m=0;
    
    printf("Insira o valor 0:");
    scanf("%d", &vetor[0]);
    
    maior=vetor[0];
    menor=vetor[0];
    
    for(i=1;i<10;i++){
        printf("Insira o valor %d:", i);
        scanf("%d", &vetor[i]);
        
        if(vetor[i]>maior){
            maior=vetor[i];
            M=i;
        }
        if(vetor[i]<menor){
            menor=vetor[i];
            m=i;
        }
    }

    printf("O maior elemento do vetor foi %d e sua posicao foi [%d]\n", maior, M);
    printf("O menor elemento do vetor foi %d e sua posicao foi [%d]\n", menor, m);
    
    system ("PAUSE");
    return 0;
}

