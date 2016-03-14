#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int idade;
    
    printf("Insira a idade do nadador:");
    scanf("%d", &idade);
    getchar();
    
    if(idade>=5&&idade<=7)printf("Categoria infantil A\n\n");
    
    else if(idade>7&&idade<=10)printf("Categoria infantil B\n\n");
    
    else if(idade>10&&idade<=13)printf("Categoria juvenil A\n\n");
    
    else if(idade>13&&idade<=17)printf("Categoria juvenil B\n\n");
    
    else if(idade>=18)printf("Categoria adulto\n\n");
    
    else printf("Sem categoria\n\n");
    
    system ("PAUSE");
    
    return 0; 
    
}
    
