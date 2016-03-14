#include <stdio.h>
#include <stdlib.h>

int main() {
    
    float x, y;
    int dentro, fora;
    
    printf("Insira o x da coordenada: ");
    scanf("%f", &x);
    getchar();
    
    printf("Insira o y da coordenada: ");
    scanf("%f", &y);
    getchar();
    
            
    if(((x<=5)&&(x>=3))&&((y<=4)&&(x>=2))) printf("O ponto esta na regiao delimitada.\n\n");
    else printf("O ponto esta fora da regiao.\n\n"); 
       
    
    system("PAUSE");
    
    return 0;
  
}    
