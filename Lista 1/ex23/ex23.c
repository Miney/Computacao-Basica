/*23. Em um concurso, as provas de Portugu�s, Matem�tica, 
Biologia e Hist�ria t�m peso 3, 3, 2 e 2,
respectivamente. 
Dada as quatro notas de um candidato, escreva um programa que determina sua
m�dia.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    float p;
    float m;
    float b;
    float h;
    

printf("Insira a nota de portugues: ");
scanf("%f", &p);
getchar();
            
printf("Insira a nota de matematica: ");
scanf("%f", &m);
getchar();
            
printf("Insira a nota de biologia: ");
scanf("%f", &b);
getchar();
            
printf("Insira a nota de historia: ");
scanf("%f", &h);
getchar();
                
printf("Sua media foi: %.2f\n",((3*p)+(3*m)+(2*b)+(2*h))/10);

system("PAUSE");
return 0;
}
