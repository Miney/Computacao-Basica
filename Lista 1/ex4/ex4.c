#include <stdio.h>
#include <stdlib.h>
int main()
{
    float numero;
    float antecessor;
    float sucessor;
       
    printf (" O numero, por favor: ");
    scanf ("%f", &numero);
      
    antecessor=numero-1;
        
    sucessor=numero+1;
    
    printf ("O antecessor: %.2f \n", antecessor);
    getchar;
    printf ("e o sucessor : %.2f  \n", sucessor);
     
    system ("pause");
    
    return 0;
}
