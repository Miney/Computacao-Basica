//Ex35
#include <stdio.h>
#include <stdlib.h>

int main(){
    int matriz[4][6], i, j;
    
    for(i=0;i<4;i++){
        for(j=0;j<6;j++){
        matriz[i][j]=0;
        }
    }
    
    printf("Insira a linha desejada:");
    scanf("%d", &i);
    printf("Insira a coluna desejada:");
    scanf("%d", &j);
    
    
        matriz[i-1][j-1]=1;
        matriz[i-1][j]=1;
        matriz[i-1][j+1]=1;
        matriz[i][j-1]=1;
        matriz[i][j+1]=1;
        matriz[i+1][j-1]=1;
        matriz[i+1][j]=1;
        matriz[i+1][j+1]=1;
    
    for(i=0;i<4;i++){
        for(j=0;j<6;j++){
        printf("%d\t",matriz[i][j]);
        }
    printf("\n");
    }
    
    system ("PAUSE");
    return 0;
}

