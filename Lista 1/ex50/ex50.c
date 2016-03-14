/*50. Tendo como dados de entrada a altura e o sexo de uma pessoa (“M” masculino e “F”
feminino), construa um programa que calcule seu peso ideal, utilizando as seguintes
fórmulas:
• para homens: (72.7*h)-58
• para mulheres: (62.1*h)-44.7*/

#include <stdio.h>
#include <stdlib.h>


int main(){
    
    char sexo;
    float h;
    
    
    printf("Insira o sexo <M ou F>: ");
    scanf("%c",&sexo);
        
    switch(sexo){
                 
                 case 'f':
                 case 'F':
                      printf("Insira a altura:");
                      scanf("%f", &h);
                      getchar();
                      printf("Seu peso ideal: %.2f\n\n",(62.1*h)-44.7);
                      break;
                 case 'm':
                 case 'M':
                      printf("Insira a altura:");
                      scanf("%f", &h);
                      getchar();
                      printf("Seu peso ideal: %.2f\n\n",(72.7*h)-58);
                      break;
                 default: printf("Sexo invalido!\n\n");
                 }
                 
    system("PAUSE");
    return 0;
}
