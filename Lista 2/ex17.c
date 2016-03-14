//ex17

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int n, r, i;
    
    printf("Insira um numero natural n:");
    scanf("%d", &n);
    
    r=0;
    
    
    for(i=1;i<=2*n;i++){
        if(i%2!=0) r+=i;
    }
    printf("%d^2=%d\n",n, r);
    
    system("PAUSE");
    return 0;
}
