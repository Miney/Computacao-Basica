#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main ()
{
    float M;
    float C;
    float i;
    int t;
    
    printf ("Insira o capital inicial:");
    scanf ("%f", &C);
    getchar();
    printf ("Insira a taxa de juros:");
    scanf("%f", &i);
    getchar();
    printf ("Insira o tempo t:");
    scanf ("%d", &t);
    getchar();
    
    M=C*(pow((1+i),t));
    
    printf ("O valor do montante: %f \n", M);
    
    system ("PAUSE");
    
    return 0; 
}
