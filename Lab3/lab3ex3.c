#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
poA = populacao inicial de A
poB = populacao inicial de B
Pan = populacao de A apos n anos
Pbn = populacao de B apos n anos
*/


int main(){
    
    float poA=90*pow(10,6), poB=200*pow(10,6),Pan, Pbn;
    int anos=0;
    
    Pan=poA*(pow((1.03),(anos-1)));
    Pbn=poB*(pow((1.015),(anos-1)));
    
    
    while (Pbn>Pan){
          anos++;
          Pan=poA*(pow((1.03),(anos-1)));
          Pbn=poB*(pow((1.015),(anos-1)));
          }
          
    printf("Serao necessarios %d anos\n\n", anos);
    printf("A populacao do pais A sera de %.0f habitantes \n\nA do pais B sera de %.0f habitantes\n\n", Pan, Pbn);
    
    system("PAUSE");
    
    return 0;

}
    
