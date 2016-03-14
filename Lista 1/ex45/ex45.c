#include <stdio.h>
#include <stdlib.h>

int main(){
    
    float sal, fin, teto;
    
    printf("Insira o valor do salario: ");
    scanf("%f", &sal);
    getchar();
    
    printf("Insira o financiamento pretendido: ");
    scanf("%f", &fin);
    getchar();
    
    teto=5*sal;
    
    if(fin<=teto) printf("Financiamento concedido\n\n");
     
    else if(fin>teto) printf ("Financiamento negado\n\n");
     
    
    
    printf("Obrigado por nos consultar!\n\n");
    
    system("PAUSE");
    
    return 0;
    
}
