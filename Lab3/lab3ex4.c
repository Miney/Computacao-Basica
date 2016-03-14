#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    
    int n, i;
    float soma=0, termo;
    
    printf("Insira N: ");
    scanf("%d", &n);
    getchar();
    
    for (i=1; i<=n; i++) {
        
        termo=(2*i-1);
        termo=termo/i;
        soma+=termo;
        
    }
    
    printf("A soma: %.4f\n\n", soma);
    
    system("PAUSE");
    
    return 0;
}
