//ex12 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    
    int numeros[5];
    int i;
    
    for(i=0;i<5;i++){
        printf("Insira um numero natural:");
        scanf("%d", &numeros[i]);
    
        if(numeros[i]<0){ 
            printf("Numero invalido!");
            printf("Insira numero natural:");
            scanf("%d", &numeros[i]);            
        }  
    }
    
    for(i=0;i<5;i++){
        
        if(numeros[i]%2==0) printf("%d\n",sqrt(numeros[i]));
        
        else if(numeros[i]%2!=0) printf("%d\n", pow(numeros[i],2));
        
    }
    
    system("PAUSE");
    return 0;
}
