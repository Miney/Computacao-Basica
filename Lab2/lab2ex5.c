#include <stdio.h>
#include <stdlib.h>

int main(){
    
    float x, y;
    
    printf("Insira a coordenada x: ");
    scanf("%f",&x);
    getchar();
    
    printf("Insira a coordenada y: ");
    scanf("%f",&y);
    getchar();
    //printf("%f %f",x,y);
    
    if(y==0&&x<=0) printf("O ponto esta na curva.\n\n");
    
    else if(y==(x/3)) printf("O ponto esta na curva.\n\n");
    
    else if(y==((-x/3)+2)) printf("O ponto esta na curva.\n\n");
    
    else printf("O ponto esta fora da curva.\n\n");
    
    system ("PAUSE");
    
    return 0;
    
}
