/*falta descobrir como dar mensagem de erro quando o numero for decimal*/


#include <stdio.h>
#include <stdlib.h>


int main()
{
    float r;
    float a1;
    float an;
    int n;
    
    printf ("Insira a razao da PA:");
    scanf ("%f", &r);
    getchar();
    printf ("Insira o primeiro termo da PA:");
    scanf ("%f", &a1);
    getchar();
                         
    
    do { printf ("Insira o numero natural N para calculo do N-esimo termo da PA:");
    scanf ("%d", &n);
    getchar();}
    while (n < 0); 
    
    
    if (n>0) an=a1+r*(n-1); 
    
    printf ("O n-esimo termo e: %f \n", an);
    
    system ("PAUSE");
    
    return 0;
}
