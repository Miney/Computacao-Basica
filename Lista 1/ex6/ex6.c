#include <stdio.h>
#include <stdlib.h>

int main()
{
    float d1;
    float d2;
    float A;
    
    printf ("Insira o valor da primeira diagonal: ");
    scanf ("%f", &d1);
    getchar();
    printf ("Insira o valor da segunda diagonal: " );
    scanf ("%f", &d2);
    getchar();
    
    A=(d1*d2)/2;
    
    printf ("O valor da area e: %f \n", A);
    
    system ("PAUSE");
    
    return 0;
}
    

    
