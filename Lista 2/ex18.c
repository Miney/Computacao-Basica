//ex18

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int n, i, ntermos=0, N, r=0, rd=0;
    
    printf("Insira o numero natural n:");
    scanf("%d", &n);
    
    //descobrindo o numero de termos impares descartaveis
    
    for(i=0;i<=n-1;i++){
        ntermos+=i;
    }
       
    //definindo o numero de termos totais a serem testados
    
    N=(ntermos+n)*2;
    
    //soma dos termos impares totais
    
    for(i=0;i<=N;i++){
        if(i%2!=0)r+=i;
    }
    
    //soma dos termos totais descartaveis
    
    for(i=0;i<ntermos*2;i++){
        if(i%2!=0)rd+=i;
    }
    
       
    printf(" %d ^ 3 = %d\n", n,r-rd);
    
    
    system("PAUSE");
    return 0;
}
