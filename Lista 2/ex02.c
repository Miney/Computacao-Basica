#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    
    float n1, n2, n3, media;
    int operacao;
    
    printf("Insira a primeira nota:");
    scanf("%f", &n1);
    getchar();
    
    printf("Insira a segunda nota:");
    scanf("%f", &n2);
    getchar();
    
    printf("Insira a terceira nota:");
    scanf("%f", &n3);
    getchar();
    
    printf("=====================\n");
    printf("Selecione o tipo de media:\n\n");
    printf("Escreva 1 para media aritmetica\n");
    printf("Escreva 2 para media ponderada\n");    
    printf("Escreva 3 para media harmonica\n\n");
    printf("======================\n");
    scanf("%d", &operacao);
    getchar();
    
    switch (operacao){
        
        case 1:
             media=(n1+n2+n3)/3;
             printf("Sua media final e: %.0f\n\n", media);
             break;
             
        case 2:
             media=((n1*3)+(n2*3)+(n3*4))/(3+3+4);
             printf("Sua media final e: %.0f\n\n", media);
             break;     
             
        case 3:
             media=3/((1/n1) + (1/n2) + (1/n3));
             printf("Sua media final e: %.0f\n\n", media);
             break;
             
        default: 
             printf("Operacao invalida!\n\n");
    }
    
    system("PAUSE");
    return 0;

}
