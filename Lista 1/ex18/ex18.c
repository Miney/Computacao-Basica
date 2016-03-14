/*Escreva um programa que lê os coeficientes a,b,c,d,e e f, calcula e mostra os 
valores de x e y.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    float a;
    float b;
    float c;
    float d;
    float e;
    float f;
    float x;
    float y;
    
    printf("Insira o coeficiente a: ");
    a=getchar();
    printf("Insira o coeficiente b: ");
    b=getchar();
    getchar();
    printf("Insira o coeficiente c: ");
    c=getchar();
    getchar();
    printf("Insira o coeficiente d: ");
    d=getchar();
    getchar();
    printf("Insira o coeficiente e: ");
    e=getchar();
    getchar();
    printf("Insira o coeficiente f: ");
    f=getchar();
    getchar();
    
    x=((c*e)-(b*f))/((a*e)-(b*d));
    y=((a*f)-(c*d))/((a*e)-(b*d));
    
        
    printf("Os valores de x e y: %.2f %.2f \n", x, y);
    
    
    system("PAUSE");
    
    return 0;
}
    
