//ex33
#include <stdlib.h>
#include <stdio.h>
int main(){
    int m[5][5], i, j, k;
    
    k=1;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            m[i][j]=k;
            k++;
        }
    }
     for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("%d\t",m[i][j]);
        }
        printf("\n");
     }
     
    system("PAUSE");
    return 0;
}
