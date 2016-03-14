#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
    
    float a, b, c, delta;
    
    printf("Insira o coeficiente a:");
    scanf("%f", &a);
    getchar();
    
    printf("Insira o coeficiente b:");
    scanf("%f", &b);
    getchar();

    printf("Insira o coeficiente c:");
    scanf("%f", &c);
    getchar();
    
    delta=pow(b,2)-(4*a*c);
    
    if(delta<0) printf("As raizes sao complexas e conjugadas\n\n");
    else if(delta==0) printf("As raizes serao reais e iguais.\n\n");
    else if(delta>0)printf("As raizes serao reais e diferentes.\n\n"); 
    
    system("PAUSE");
    
    return 0;
}            
