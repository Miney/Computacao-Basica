#include <stdio.h>
#include <stdlib.h>

int main() 
{
    
    float nota;
    
    printf("Insira a nota do aluno:");
    scanf("%f", &nota);
    getchar();
    
    if(nota<=3.9)printf("Fraco\n\n");
    
    else if(nota<=6.9)printf("Regular\n\n");
    
    else if(nota<=8.9)printf("Bom\n\n");
    
    else if(nota<=10)printf("Excelente\n\n");
    
    
    system("PAUSE");
    
    return 0;
    
}
