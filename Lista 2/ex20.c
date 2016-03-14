//ex20

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int n=-1, n2, chutes=0;
    
    
    do{
        printf("Insira um numero inteiro entre 0 e 1000:");
        scanf("%d", &n);
        if(n<0||n>1000)printf("Numero invalido!\n");
    }while(n<0||n>1000);
    system("cls");
    
    
    
    do{
        printf("Advinhe o numero:");
        scanf("%d", &n2);
        if(n2<n) printf("Numero indicado menor que o numero secreto\n"); 
        else if(n2>n) printf("Numero indicado maior que o numero secreto\n");
        chutes++;
    }while(n2!=n);
    
    printf("\n\nParabens! Voce acertou o numero em %d tentativas!\n\n", chutes);
    system("PAUSE");
    return 0;
}

