
#include <stdio.h>
#include <stdlib.h>
int main()

{ float n1;
  float n2;
  float n3;
  float media;
  
printf ("Escreva o primeiro numero:") ;
scanf ("%f", &n1);
getchar();
printf ("escreva o segundo numero:");
scanf ("%f", &n2);
getchar();
printf ("Escreva o terceiro numero:");
scanf ("%f", &n3); 
getchar();

media=(n1+n2+n3)/3;

printf ("O valor da media: %f \n", media );
 
system("PAUSE");
return 0;
}
