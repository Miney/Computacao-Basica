//ex15
#include <stdio.h>
#include <stdlib.h>

int main(){
    float x, r;
    int i, n;
    
    printf("Insira o numero:");
    scanf("%f", &x);
    getchar();
    
    
    printf("Insira a potencia:");
    scanf("%d", &n);

    
    if(0==n) r=1;
    else if(1==n) r=x;
    else {
         r=1;
         for(i=0;i<n;i++){
             r=r*x;
         }
    }
    printf("%.2f ^ %d = %.2f\n",x,n,r);
    system("PAUSE");

    return 0;
}
