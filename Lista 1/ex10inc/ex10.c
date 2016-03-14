
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi  3.14159265

int main()
{
    float gr;
    double rd;
        
    printf ("Insira um angulo em graus:");
    scanf ( "%f", &gr);
    getchar();
    
    //rd=(gr*2*M_6076PI)/180;
    
    printf (" %f \n", sin(rd));  
    
    system ("PAUSE");
    return 0;
}
