//ex21

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int i, j, k, ifat=1, termos=0;
    float sant=63, sfinal, diff=sfinal-sant;
    
    //do{
        for(i=0;i<=3;i++){
            for(k=1;k<i;k++){
                ifat=ifat*(i-k);
                
                          
                /*for(j=61;j>0;j-2){
                    sfinal=sant+(j/ifat);
                    printf("soma anterior: %f soma final: %f\n", sant,sfinal);
                }*/
            }printf("ifatorial : %d\n", ifat);
        //termos++;
        }
        
    //}while(diff>=0.00001);
    //printf("Termos necessarios: %d\n\n", termos);
    system("PAUSE");
    return 0;
}
