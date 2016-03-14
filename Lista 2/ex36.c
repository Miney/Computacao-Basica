//ex 36
#include <stdio.h>
#include <stdlib.h>
int main(){
    int lugares[4][8], i, j, k=1;
    
    
    for(j=0;j<8;j++){
        for(i=3;i>=0;i--){
            lugares[i][j]=k;
            k++;
        }
    }  
    
    for(i=0;i<4;i++){
        for(j=0;j<8;j++){
            printf("%d\t", lugares[i][j]);
        }
        printf("\n");
    }



    system("PAUSE");
    return 0;
}

