#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float r;
    float h;
    float v;
    
    printf ("Digite o raio da base da lata de oleo:");
    scanf ("%f", &r);
    getchar();
    printf ("Digite a altura da lata de oleo:");
    scanf ("%f", &h);
    getchar();    
    
    v=3.14*(r^2)*h;
    
    printf ("O volume da lata de oleo: %f \n", v);
    
    system ("PAUSE");
    
    return 0;
}
