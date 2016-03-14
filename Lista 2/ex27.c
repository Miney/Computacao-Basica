//ex27
#include <stdlib.h>
#include <stdio.h>

int main(){
    float vetor[12], soma;
    int i, j, k;
    
    for(k=0;k<12;k++){
        printf("Insira o valor %d do vetor:", k);
        scanf("%f", &vetor[k]);
    } 
    
    printf("Insira o valor j<12:");
    scanf("%d", &j);
    
    printf("Insira o valor i, tal que i<j:");
    scanf("%d", &i);
    
    soma=0;
    for(k=i;k<=j;k++){
        soma+=vetor[k];
    }
    
    printf("A soma dos valores entre as posicoes %d e %d: %.2f\n",i,j,soma);
    system("PAUSE");
    return 0;
}

