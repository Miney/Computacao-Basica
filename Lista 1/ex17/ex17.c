/*17. Escreva um programa que leia o tempo de duração de 
um evento em uma fábrica expressa em
segundos e mostre-o expresso em horas, minutos e segundos.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int tempo;
    int s;
    int m;
    int h;
    
    printf ("Insira o tempo em segundos: ");
    scanf ("%d", &tempo);
    getchar();
    
    if(tempo<0){ 
         printf("O tempo nao pode ser negativo \n");
         system("PAUSE");
         
         return 0;
         }

   
         
         
         s=(tempo%(60*60))%60;
         m= (tempo%(60*60))/60;
         h=tempo/pow(60,2);
         
        
         printf (" %d hora(s) \n", h);
         printf("%d minuto(s) \n", m);
         printf("%d segundo(s) \n", s);        
        
         system ("PAUSE");
         
         return 0;
         
         }
    
         
          
