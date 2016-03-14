#include <stdio.h>
#include <stdlib.h>

int main(){
    
    float A, B, C;
    
    printf("Insira o lado A: ");
    scanf("%f", &A);
    getchar();
    
    
    printf("Insira o lado B: ");
    scanf("%f", &B);
    getchar();
    
    printf("Insira o lado C: ");
    scanf("%f", &C);
    getchar();
    
    if((A<(B+C))&&(B<(C+A))&&(C<(A+B)))printf("Triangulo existe, condicao satisfeita.\n\n");
    
    
    
    else printf("Triangulo nao existe, condicao insatisfeita.\n\n");
    
    system("PAUSE");
    
    return 0;
  
}
    
