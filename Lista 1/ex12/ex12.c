

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float n;
    int b;
    float lb;
    
    printf ("Insira o numero : ");
    scanf("%f", &n);
    getchar();
    printf ("Insira a base:");
    scanf ("%d", &b);
    getchar();
    
    lb=log(n)/log(b);    
    printf ("O logaritmo de %.2f na base %d : %.2f \n", n, b, lb);
    
    system ("PAUSE");
    
    return 0;
    
}
    
    
