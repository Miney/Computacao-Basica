/*41. Dado um n�mero real qualquer, informe seu valor absoluto [Aten��o: o aluno n�o pode
utilizar a fun��o abs ou fabs.]*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float n;
    
    printf("Insira um numero real:");
    scanf("%f", &n);
    getchar;
    
    if(n<0) printf("O valor absoluto de n: %.4f\n\n", n*(-1));
    
    else printf("O valor absoluto de n: %.4f\n\n", n);
    
    system("PAUSE");
    
    return 0;
}
