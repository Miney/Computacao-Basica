/*42. Uma empresa determinou um reajuste salarial de 5% a todos os seus funcion�rios.
Al�m disto, concedeu um abono de R$ 100,00 para aqueles que recebem at� R$
750,00. Dado o valor do sal�rio de um funcion�rio, informar para quanto ele ser�
reajustado.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    float sal;
    
    printf("Insira o salario atual: ");
    scanf("%f", &sal);
    getchar();
    
    if(sal<=750) printf("O valor do salario com o reajuste: %.2f\n\n",(sal+(sal*0.05))+100);
    
    else printf("O valor do salario com o reajuste:%.2f \n\n",sal+(sal*0.05));
    
    system("PAUSE");
    return 0;
}
