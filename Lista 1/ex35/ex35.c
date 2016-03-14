#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
    
int b1;
float mb, kb, b2;

printf("Insira o tamanho do arquivo em bytes: ");
scanf("%d", &b1);
getchar();

mb=b1/1048576;
kb=(b1%1048576)/1048;
b2=(b1%1048576)%1048;

printf("%d Bytes equivalem a %.0f MBytes, %.0f KBytes e %f Bytes \n", b1, mb, kb, b2);

system ("PAUSE");
return 0;
           }



