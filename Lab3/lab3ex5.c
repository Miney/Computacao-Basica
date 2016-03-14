#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


int main() {

  time_t start, end;
  double dif;
  float pi=3.14159, soma=4, erro=soma-pi, termo; /* adimite-se o termo 0 como 4*/
  int n=1;
  
  time(&start);
  while( erro > 0.0001){ /* faz o loop enquanto o erro nao fica menor ou igual a 0.0001*/
    
    /* o valor do termo vai seguir a equacao 4/(2*n+1), onde n eh o no. do termo*/
    termo=(2*n+1);
    termo=4/termo;
    

    if (1==(n%2)) { // se 1 e o resto da divisao do (no. do termo) por 2, subtrai o valor do termo(termos negativos sao impares)
      soma-=termo;
    } else {        // caso contrario, soma-se o termo(termos positivos sao pares)
      soma+=termo;
    }

    erro=soma-pi;
    n++;
    if (erro<0) {
      erro=-erro;
    }
    
  }
  time(&end); 
  
  dif=difftime(end,start);
    
  printf("pi=%.4f\no tempo gasto para o calculo:%.21f segundos\n", soma,dif);
     
  system ("PAUSE"); 

  return 0;

}
