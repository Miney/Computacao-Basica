/*25. Escreva um programa que, tendo como dados de entrada dois pontos quaisquer no plano, 
P(x1,y1) e
P(x2,y2), calcula a distância d entre eles por meio da seguinte equação:*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    float x1, x2;
    float y1, y2;
    float d;
    
printf("Insira os primeiros pontos, separados por um espaco:");
scanf ("%f" "%f", &x1,&y1 );
getchar();

printf("Insira os segundos pontos, separados por um espaco:");
scanf ("%f" "%f", &x2,&y2 );
getchar();


d=sqrt((pow((x2-x1),2))+(pow((y2-y1),2)));

printf("A distancia entre as duas coordenadas: %.2f\n",d);

system("PAUSE");
return 0;
}
