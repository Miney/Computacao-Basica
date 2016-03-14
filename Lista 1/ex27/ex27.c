/*27. Uma certa firma de encanamento paga R$ 30,00 reais por dia trabalhado. Escreva um programa
que calcule e mostre na tela do computador o salário líquido de um encanador dessa firma,
sabendo-se a quantidade de dias que ele trabalhou, fornecida pelo usuário. O salário líquido
corresponde ao salário bruto, descontados 8% de imposto.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int d;
       
        
    printf("Insira o numero de dias trabalhados:");
    scanf("%d", &d);
    getchar();
    
    if(d<0) {
            printf("O numero de dias nao pode ser negativo\n");
               do {printf("Insira o numero de dias trabalhados:");
               scanf("%d", &d);
               getchar(); 
               }while(d<0);;
               }
               
    printf("Seu salario sera de: %.2f\n", (d*30)-(0.08*d*30));
    
    system("PAUSE");
    return 0;
    
}
