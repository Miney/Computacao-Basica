/*7. A prefeitura da cidade abriu uma linha de cr�dito para os funcion�rios estatut�rios.
O valor m�ximo da presta��o n�o poder� ultrapassar 30% do sal�rio bruto. Fazer um
programa que permita entrar com o sal�rio bruto e o valor da presta��o e informa
se o empr�stimo pode ou n�o ser concedido.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float salario, prestacao, maximo;
    
    printf("insira o salario bruto:");
    scanf("%f", &salario);
    getchar();
    printf("Insira o valor da prestacao:");
    scanf("%f", &prestacao);
    
    maximo=0.3*salario;
    
    
    if(prestacao>maximo)printf("O emprestimo nao pode ser concedido,\nvalor da prestacao ultrapassa maximo permitido.\n\n");
    else printf("Emprestimo pode ser concedido.\n\n");

system ("PAUSE");
return 123;
}
