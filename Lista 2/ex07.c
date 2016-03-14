/*7. A prefeitura da cidade abriu uma linha de crédito para os funcionários estatutários.
O valor máximo da prestação não poderá ultrapassar 30% do salário bruto. Fazer um
programa que permita entrar com o salário bruto e o valor da prestação e informa
se o empréstimo pode ou não ser concedido.*/

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
