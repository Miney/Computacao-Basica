//ex31
#include <stdlib.h>
#include <stdio.h>

int main(){

    float ENTRADAS[10], PESOS[10], ENTP[10], SOMAP;
    int i, j;
    
    for(i=0;i<10;i++){
        printf("Insira o valor %d do vetor de entradas:", i);
        scanf("%f", &ENTRADAS[i]);
    }
    for(i=0;i<10;i++){
        printf("Insira o valor %d do vetor de pesos:", i);
        scanf("%f", &PESOS[i]);
    }
    j=0;
    for(i=0;i<10;i++){
        ENTP[i]=ENTRADAS[i]*PESOS[j];
        j++;
    }
    SOMAP=0;
    for(i=0;i<10;i++){
        SOMAP+=ENTP[i];
    }
    if(SOMAP>0) printf("Neuronio ativado!\n");
    else printf("Neuronio inibido!\n");
    
    system("PAUSE");
    return 0;
}


