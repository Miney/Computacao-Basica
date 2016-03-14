//ex29
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
    float VET[20], S=0;
    int i, j, k; 
    
    for(k=0;k<20;k++){
        printf("Insira o valor da posicao %d:", k);
        scanf("%f", &VET[k]);
    }
    j=19;
    for(i=0;i<10;i++){
        printf("i=%d, j=%d\n",i,j);
        S=S+((VET[i]-VET[j])*(VET[i]-VET[j]));
        printf("%f\n", S);
        j--;
    }
    printf("S=%.2f\n", S);
    
    system("PAUSE");
    return 0;
}

