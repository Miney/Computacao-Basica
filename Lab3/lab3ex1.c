#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int lanche;
    float preco;
    float hamburguer, pao, queijo, alface, tomate, bacon, ovofrito, queijoextra;
    
    hamburguer=1.50;
    pao=0.50;
    queijo=0.50;
    alface=0.50;
    tomate=0.50;
    bacon=0.60;
    ovofrito=0.70;
    queijoextra=0.25;
    
    
    printf("Escolha uma das opcoes de lanche:\n\n");
    printf("==========\n\n");
    printf("MENU DE LANCHES\n");
    printf("==========\n\n");
    printf("1-SUPER ECONOMICO\n");
    printf("(pao e hamburguer)\n\n");
    printf("2-ECONOMICO\n");
    printf("(queijo, alface, tomate, hamburguer e pao)\n\n");
    printf("3-COMPLETO\n");
    printf("(bacon, ovo frito, queijo, queijo extra, 2 hamburgueres\n alface, tomate e pao)\n\n");
    printf("==========\n\n");
    printf("Entre com a opcao de lanche:");
    scanf("%d", &lanche);
    
    switch(lanche){
                   case 1:
                        preco=pao+hamburguer;
                        printf("O valor do seu lanche sera de R$%.2f\n\n", preco);
                        break;
                   
                   case 2:
                        preco=pao+hamburguer+queijo+alface+tomate;
                        printf("O valor do seu lanche sera de R$%.2f\n\n", preco);
                        break;
                   
                   case 3:
                        preco=pao+hamburguer+queijo+alface+tomate+bacon+ovofrito+queijoextra+hamburguer;
                        printf("O valor do seu lanche sera de R$%.2f\n\n", preco);
                        break;
                   
                   default:
                        printf("Opcao invalida!\n\n");                        
                        }     
    
    system("PAUSE");
    return 0;
}    


