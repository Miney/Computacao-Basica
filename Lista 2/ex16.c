//ex16
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, r, i;
    
    printf("Insira um numero natural:");
    scanf("%d", &n);
    
    r=1;    
    
    for(i=0;i<n;i++){
        r=r*(n-i);
    }
    printf("n!=%d\n", r);
    
    system("PAUSE");
    return 0;
}
